class employee:public bank{
	char employeename[30];
	public:
		employee()
		{
			strcpy(employeename,"shrey garg");
		
		}
		void disp()
		{
				cout<<employeename<<endl;
		}
};
