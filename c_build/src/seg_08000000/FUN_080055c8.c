// undefined FUN_080055c8(void)
// entry 0x80055c8


void FUN_080055c8(int param_1,int *param_2)

{
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  *param_2 = *(int *)(param_1 + 0x10);
  *(int **)(param_1 + 0x10) = param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}


