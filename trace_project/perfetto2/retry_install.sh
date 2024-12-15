#!/bin/bash

# 设置最大重试次数，避免无限循环（可根据需要调整）
MAX_RETRIES=40
# 初始化重试次数
RETRY_COUNT=0
# 等待时间（秒）
WAIT_TIME=2

# 循环执行命令，直到成功或达到最大重试次数
while [[ $RETRY_COUNT -lt $MAX_RETRIES ]]
do
    echo "正在执行 tools/install-build-deps，尝试次数: $((RETRY_COUNT+1))"
    
    # 执行命令
    ./tools/install-build-deps
    
    # 检查命令是否成功执行
    if [[ $? -eq 0 ]]; then
        echo "命令成功执行！"
        exit 0
    else
        echo "命令执行失败，等待 $WAIT_TIME 秒后重试..."
        RETRY_COUNT=$((RETRY_COUNT+1))
        sleep $WAIT_TIME
    fi
done

# 如果达到最大重试次数后仍然失败
echo "达到最大重试次数 $MAX_RETRIES，命令仍然失败。"
exit 1

