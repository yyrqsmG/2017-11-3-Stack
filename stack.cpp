#include <iostream>
using namespace std;

#define NUM 10
int j=0;

class Stack{
private:
    int *m_stack;
    int m_head;//栈顶
    int m_tail;//栈底
public:
    Stack();
    ~Stack();

    void push(int x);//入栈
    void pop();//出栈
    void isEmpty();//是否空
    void isFulss();//是否满
    void reverse();//反转
};

Stack::Stack()
{
    m_stack = new int[NUM];
    if(!m_stack)
        cout<<"分配失败"<<endl;
    for(int i=NUM-1; i>=0; i--)
        m_stack[i] = 0; 
    m_head = 0;
    m_tail = NUM-1;
}

Stack::~Stack()
{
    delete[] m_stack;
}
//入栈
void Stack::push(int x)
{
    if(!m_stack[m_tail])
    {
        m_stack[m_head] = x;
        m_head++;
        cout<<m_head<<" ";			
    }
	else
	  cout<<"栈满"<<endl;
}

//出栈
void Stack::pop(void)
{
	while(m_head != 0)
	{
    	m_head--;
    	cout<<m_stack[m_head]<<' ';
	}
    cout<<endl;
}

void Stack::isEmpty()
{
    if(m_head == 0)
    {
        cout<<"栈为空"<<endl;
    }
}

void Stack::isFulss()
{
    if(m_head == m_tail)
    {
        cout<<"栈满"<<endl;
    }
}
/*
void Stack::reverse(void)
{
	int *p;
	j++;
	for(int i=0; i<=NUM/2; i++)
	{
		int tmp = m_stack[i];
		m_stack[i] = m_stack[NUM-1-i];
		m_stack[NUM-1-i] = tmp;
	}
	if(j/2 == 0)
	{
		p = &m_stack[m_head];
		&m_stack[m_head] = &m_stack[NUM-1-m_head];
		&m_stack[NUM-1-m_head] = p;
	}
}
*/
int main(void)
{
    Stack a;
    a.isEmpty();
    a.push(1);
    a.push(2);
    a.push(3);
	cout<<endl;
    //a.isFulss();
    a.pop();
    a.isEmpty();
}
