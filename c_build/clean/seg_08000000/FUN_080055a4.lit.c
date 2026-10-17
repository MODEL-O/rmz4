// undefined FUN_080055a4(void)
// entry 0x80055a4


void FUN_080055a4(int *param_1)

{
  int iVar1;
  
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  iVar1 = (*(int *)0x02000024);
  *param_1 = *(int *)(iVar1 + 0x10);
  *(int **)(iVar1 + 0x10) = param_1;
  *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + 1;
  return;
}


