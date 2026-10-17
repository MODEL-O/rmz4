// undefined FUN_080ffa48(void)
// entry 0x80ffa48


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080ffa48(int param_1)

{
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x30)) {
LAB_080ffa9c:
      if (*(int *)(param_1 + 0xc0) != 0) goto LAB_080ffaa6;
    }
    else {
      iVar2 = FUN_0802adac(0,param_1,DAT_080ffacc);
      *(int *)(param_1 + 0xc0) = iVar2;
      if (iVar2 != 0) {
        FUN_0801cf00(param_1,DAT_080ffad0);
        FUN_08005784(param_1 + 0x74,DAT_080ffad4);
        goto LAB_080ffa9c;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x78 < bVar1) {
      FUN_08002b10(DAT_080ffb04);
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
LAB_080ffaa6:
    iVar2 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
    if (iVar2 != 0) {
      FUN_0801cf00(param_1,DAT_080ffad8);
      FUN_08005784(param_1 + 0x74,_FUN_080ffadc);
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  FUN_0801cff0(param_1);
                    /* WARNING: Could not recover jumptable at 0x080ffb02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


