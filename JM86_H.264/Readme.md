## 操作流程与规范

**编码**：
4、鼠标左键选中 lencod 工程
5、打开 Project -> Settings -> Debug ，在 Working directory 选项中填写 ./bin，在 Program arguments 选项中填写需要使用的编码配置文件，例如：-d encoder_baseline.cfg ，然后确定修改
6、鼠标右键选中 lencod 工程，选择鼠标右键菜单 Set as Active Project
7、编译运行编码器，完成编码。这个时候会在源代码根目录下的 bin 文件夹中生成几个新文件，其中 test.264 （对应为编码配置文件中 OutputFile 参数的值）即为压缩码流文件

**解码**：
8、鼠标左键选中 ldecod 工程
9、打开 Project -> Settings -> Debug ，在 Working directory 选项中填写 ./bin，在 Program arguments 选项中填写需要使用的解码配置文件，例如：decoder.cfg ，然后确定修改
10、鼠标右键选中 ldecod 工程，选择鼠标右键菜单 Set as Active Project
11、编译运行解码器，完成解码。这个时候会在源代码根目录下的 bin 文件夹中生成几个新文件，其中 test_dec.yuv（对应为解码配置文件中的第三个参数）即为解码文件




在编程开发过程中，建议大家养成良好习惯，文件不要乱放、混放。因此建议编译 JM 过程如下：

1、**下载并解压 JM 源代码**
2、在源代码根目录下的 bin 文件夹中新建 backup 文件夹，将 bin 文件夹中所有文件移入该文件夹做备份
3、在源代码根目录下新建 encodtest 文件夹，作为编码使用。将编码过程所需要的文件，例如：编码配置文件（encoder_baseline.cfg），待编码视频序列文件（foreman_part_qcif.yuv，对应为编码配置文件中 InputFile 参数的值）复制到该文件夹中
4、在源代码根目录下新建 decodtest 文件夹，作为解码使用。将解码过程所需要的文件，例如：解码配置文件（decoder.cfg）复制到该文件夹中
5、打开源代码根目录下的工作区 tml.dsw

**编码**：
6、鼠标左键选中 lencod 工程
7、打开 Project -> Settings -> Debug ，在 Working directory 选项中填写 ./encodtest ，在 Program arguments 选项中填写需要使用的编码配置文件（要与第3步所复制的文件同名），例如：-d encoder_baseline.cfg ，然后确定修改
8、鼠标右键选中 lencod 工程，选择鼠标右键菜单 Set as Active Project
9、编译运行编码器，完成编码。这个时候会在源代码根目录下的 encodtest  文件夹中生成几个新文件，其中 test.264 （对应为编码配置文件中 OutputFile 参数的值）即为压缩码流文件

**解码**：
10、鼠标左键选中 ldecod 工程
11、打开 Project -> Settings -> Debug ，在 Working directory 选项中填写 ./decodtest，在 Program arguments 选项中填写需要使用的解码配置文件（要与第4步所复制的文件同名），例如：decoder.cfg ，然后确定修改
12、将编码生成的压缩码流文件 test.264 复制到 decodtest 文件夹中
13、鼠标右键选中 ldecod 工程，选择鼠标右键菜单 Set as Active Project
14、编译运行解码器，完成解码。这个时候会在源代码根目录下的 decodtest  文件夹中生成几个新文件，其中 test_dec.yuv（对应为解码配置文件中的第三个参数）即为解码文件

**另外**：
可以不用打开 tml.dsw 工程，而直接打开单个工程，例如：打开 lencod.dsw 就可以进行编码，而打开 ldecod.dsw 就可以进行解码。单独打开工程所需要的设置与前述过程相同