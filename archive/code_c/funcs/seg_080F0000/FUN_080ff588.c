// undefined FUN_080ff588(void)
// entry 0x80ff588


void FUN_080ff588(uint param_1)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = param_1 >> 2;
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar1 = iVar1 + DAT_080ff5cc;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff5d0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ff134(param_1);
                    /* WARNING: Could not recover jumptable at 0x080ff5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


