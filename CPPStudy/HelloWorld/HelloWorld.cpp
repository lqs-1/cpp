#include<iostream>
using namespace std;

//C中常量定义方法，不推荐，没有数据类型
#define SIZE  1


/*
* CPP编译的流程
* 1.将CPP文件中的代码编译成obj文件，这里面不包含预处理信息(所有#开头的都是预处理指令，#include<iostream>，这里的iostream表示头文件
	这个是CPP自带的)，只包含自己写的代码信息
* 2.将预处理信息和obj中的信息做一个链接，然后生成对应的exe文件
* 
* 
* std::cout << "hello world" << std::endl;
* std是命名空间用于区分后面的方法，和对象.方法差不多
* 命名空间页可以不写 在头部声明命名空间就行 就可以写成 cout << "hello world" << endl;
* 
* 
* 
*数据类型
bool            1 个字节 True=1 False=0
char	        1 个字节	-128 到 127 或者 0 到 255
unsigned char	1 个字节	0 到 255
signed char	    1 个字节	-128 到 127
int	            4 个字节	-2147483648 到 2147483647
unsigned int	4 个字节	0 到 4294967295
signed int	    4 个字节	-2147483648 到 2147483647
short int	    2 个字节	-32768 到 32767
unsigned short int	  2 个字节	0 到 65,535
signed short int	  2 个字节	-32768 到 32767
long int	          8 个字节	-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807 如23L
signed long int	      8 个字节	-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
long long             8 个字节（32和64都是，long类型32位系统4字节）如23LL
unsigned long int	  8 个字节	0 到 18,446,744,073,709,551,615
float	       4 个字节	精度型占4个字节（32位）内存空间，+/- 3.4e +/- 38 (~7 个数字)  如23.23f
double	       8 个字节	双精度型占8 个字节（64位）内存空间，+/- 1.7e +/- 308 (~15 个数字)
long double	   16 个字节	长双精度型 16 个字节（128位）内存空间，可提供18-19位有效数字。 如23.23L
*/

//全部变量只声明的话使用不会报错，会有默认值
//string name = "lee";
//int y;

int main() {
	//std::cout << "hello world" << std::endl;
	//cout << "hello world" << endl;

	//cout << "请输入名字" << endl;
	//string name;
	//cin >> name;
	//cout << "欢迎你" << name << endl << name << endl;


	//局部变量 如果有同名全局变量 直接用就是局部生效 带上命名空间就是全局生效，局部变量要声明赋值才能使用
	//string name = "yes";
	//int y = 23;
	//cout << y << endl;
	//cout << ::y << endl;

	//CPP提供的具有数据类型的常量
	//const int Size = 2;
	//cout << SIZE << endl;
	//cout << Size << endl;

	unsigned long long a = 1;

	cout << a << endl;




	//cin.get();
	system("pause");
}