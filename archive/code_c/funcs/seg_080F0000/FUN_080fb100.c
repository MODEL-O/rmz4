// undefined FUN_080fb100(void)
// entry 0x80fb100


undefined4 FUN_080fb100(int param_1)

{
  sbyte sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0x11);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    if (((int)(uint)*(byte *)(iVar4 + 0xb5) >> sVar1 & 1U) != 0) {
      iVar3 = *(int *)(iVar4 + 0xb8);
      if (iVar3 < 0xa0) {
        if (iVar3 < 0x20) {
          iVar4 = *(int *)(iVar4 + 0x58) + iVar3 * -0x80;
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x58) + DAT_080fb168;
        }
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x58) + iVar3 * 0x80 + DAT_080fb158;
      }
      *(int *)(param_1 + 0x58) = iVar4;
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fb128);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080fb17c(param_1);
  }
  return in_lr;
}


