#include<stdio.h>
#include<math.h>
main(){
	float m,d;
	int M, D;
	
	printf("Ingresar  numero de mes de nacimiento de (1-12) ");
	scanf("%f", &m);
	printf("Ingresar dia de nacimiento de (1-31) ");
	scanf("%f", &d);
	
	M=0;
	D=0;
	if(m != floor(m)||d != floor(d)){
		
	}
	else{
		M = (int)m;
		D = (int)d;
	}
	
	if(M>=1&&M<=12)
	{
		if(M==1)
		{
			if(D>=1&&D<=31)
			{
				if(D<20)
				{
					printf("Su signo es Capricornio \n");
				}
				else
				{
					printf("Su signo es Acuario \n");
				}
			}
			else
			{
				printf("No me rompas el programa GG \n");	
			}
		}
		else
		{
			if(M==2)
			{
				if(D>=1&&D<=28)
				{
					if(D<19)
					{
						printf("Su signo es Acuario \n");
					}
					else
					{
						printf("Su signo es Piscis \n");
					}
				}
				else
				{
					printf("No me rompas el programa GG \n");	
				}
			}
			else
			{
				if(M==3)
				{
					if(D>=1&&D<=31)
					{
						if(D<21)
						{
							printf("Su signo es Piscis \n");
						}
						else
						{
							printf("Su signo es Aries \n");
						}
					}
					else
					{
						printf("No me rompas el programa GG \n");	
					}
				
				}
				else
				{
					if(M==4)
					{
						if(D>=1&&D<=30)
						{
							if(D<20)
							{
								printf("Su signo es Aries \n");
							}
							else
							{
								printf("Su signo es Tauro \n");
							}
						}
						else
						{
							printf("No me rompas el programa GG \n");	
						}
					}
					else
					{
						if(M==5)
						{
							if(D>=1&&D<=31)
							{
								if(D<21)
								{
									printf("Su signo es Tauro \n");
								}
								else
								{
									printf("Su signo es Geminis \n");
								}
							}
							else
							{
								printf("No me rompas el programa GG \n");	
							}
						}
						else
						{
							if(M==6)
							{
								if(D>=1&&D<=30)
								{
									if(D<21)
									{
										printf("Su signo es Geminis \n");
									}
									else
									{
										printf("Su signo es Cancer \n");
									}
								}
								else
								{
									printf("No me rompas el programa GG \n");	
								}
							}
							else
							{
								if(M==7)
								{
									if(D>=1&&D<=31)
									{
										if(D<23)
										{
											printf("Su signo es Cancer \n");
										}
										else
										{
											printf("Su signo es Leo \n");
										}
									}
									else
									{
										printf("No me rompas el programa GG \n");	
									}
								}
								else
								{
									if(M==8)
									{
										if(D>=1&&D<=31)
										{
											if(D<23)
											{
												printf("Su signo es Leo \n");
											}
											else
											{
												printf("Su signo es Virgo \n");
											}
										}
										else
										{
											printf("No me rompas el programa GG \n");	
										}
									}
									else
									{
										if(M==9)
										{
											if(D>=1&&D<=30)
											{
												if(D<23)
												{
													printf("Su signo es Virgo \n");
												}
												else
												{
													printf("Su signo es Libra \n");
												}
											}
											else
											{
												printf("No me rompas el programa GG \n");	
											}
										}
										else
										{
											if(M==10)
											{
												if(D>=1&&D<=31)
												{
													if(D<23)
													{
														printf("Su signo es Libra \n");
													}
													else
													{
														printf("Su signo es Escorpio \n");
													}
												}
												else
												{
													printf("No me rompas el programa GG \n");	
												}
											}
											else
											{
												if(M==11)
												{
													if(D>=1&&D<=30)
													{
														if(D<22)
														{
															printf("Su signo es Escorpio \n");
														}
														else
														{
															printf("Su signo es Sagitario \n");
														}
													}
													else
													{
														printf("No me rompas el programa GG \n");	
													}	
												}
												else
												{
													if(M==12)
													{
														if(D>=1&&D<=31)
														{
															if(D<20)
															{
																printf("Su signo es Sagitario \n");
															}
															else
															{
																printf("Su signo es Capricornio \n");
															}
														}
														else
														{
															printf("No me rompas el programa GG \n");	
														}
													}
													else
													{
												
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		printf("No me rompas el programa GG \n");
	}
}

