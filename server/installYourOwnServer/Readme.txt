该脚本将自动执行 git-pull 和安装您自己的过程
位于GNU/Linux 机器上的服务器。

首先为其创建一个文件夹，如下所示：

mkdir myServer

确保您对此文件夹具有读/写权限，假设您的
用户帐户将运行服务器。 如果服务器要运行
由其他帐户代替，请确保该帐户具有读写权限
权限。

然后将此脚本复制到该文件夹中。 假设 myServer 在您主机中目录：

cp serverPullAndBuild.sh ~/myServer

现在切换到该目录并运行脚本：

cd ~/myServer
bash severPullAndBuild.sh

等待，然后就完成了。
