cd perfetto
sudo chown -R chengang  /sys/kernel/tracing
out/linux/tracebox -o trace_file.perfetto-trace --txt -c test/configs/android_log.cfg
cd ..
