// undefined FUN_080b6068(void)
// entry 0x80b6068


undefined4 FUN_080b6068(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  uint unaff_r4;
  int unaff_r5;
  uint *unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 in_lr;
  char in_OV;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_0000002c;
  int aiStack_8 [2];
  
  aiStack_8[0] = param_2;
  if ((int)param_1 < 0 == (bool)in_OV) {
    psVar4 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
    if (*psVar4 != 0) {
      *psVar4 = *psVar4 + -1;
    }
    FUN_0807f8ec(param_1);
    return in_lr;
  }
  while( true ) {
    *unaff_r6 = param_1 & 0x7fffffff;
    iVar1 = DAT_080b615c;
    in_stack_00000008 = param_2 + ((param_1 & 0x7fffffff) >> 0x10 & unaff_r8) * 0x100 + DAT_080b615c
    ;
    iVar5 = *(int *)(unaff_r5 + 0x58);
    iVar2 = *(int *)((int)aiStack_8 + param_3 + 4);
    uVar3 = (param_1 & 0x7fffffff) * unaff_r10 + unaff_r9;
    *unaff_r6 = uVar3 & 0x7fffffff;
    in_stack_0000000c = iVar5 + iVar2 + ((uVar3 & 0x7fffffff) >> 0x10 & unaff_r8) * 0x100 + iVar1;
    FUN_080e83c8(unaff_r5,&stack0x00000008,0,0);
    unaff_r4 = unaff_r4 - 1;
    if ((int)unaff_r4 < 1) break;
    param_3 = (unaff_r4 & 1) * 8;
    param_2 = *(int *)(unaff_r5 + 0x54) + aiStack_8[(unaff_r4 & 1) * 2];
    param_1 = *unaff_r6 * unaff_r10 + unaff_r9;
  }
  return in_stack_0000002c;
}


