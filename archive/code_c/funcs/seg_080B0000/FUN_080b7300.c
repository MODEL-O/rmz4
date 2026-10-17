// undefined FUN_080b7300(void)
// entry 0x80b7300


undefined4 FUN_080b7300(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  uint *unaff_r9;
  int iStack00000020;
  int iStack00000024;
  undefined4 in_stack_00000040;
  
  iVar1 = DAT_080b7358;
  iStack00000020 = param_2 + param_1 * 0x100 + DAT_080b7358;
  iVar4 = *(int *)(unaff_r7 + 0x58);
  iVar2 = *(int *)(&stack0x00000004 + param_3);
  uVar3 = unaff_r6 * unaff_r8 + unaff_r4;
  *unaff_r9 = uVar3 & 0x7fffffff;
  iStack00000024 = iVar4 + iVar2 + ((uVar3 & 0x7fffffff) >> 0x10 & unaff_r5) * 0x100 + iVar1;
  FUN_080e83c8();
  return in_stack_00000040;
}


