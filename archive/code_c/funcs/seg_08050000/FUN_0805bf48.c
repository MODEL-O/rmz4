// undefined FUN_0805bf48(void)
// entry 0x805bf48


undefined4 FUN_0805bf48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar4 = 1;
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar2 = *(int *)(iVar3 + 0x54);
    if (iVar1 < iVar2) {
      *(undefined1 *)(iVar3 + 0xbc) = 0;
    }
    else {
      if ((iVar1 <= iVar2) && (uVar4 = 0, iVar2 < *(int *)(*DAT_0805bf88 + 0x54))) {
        uVar4 = 1;
      }
      *(undefined1 *)(iVar3 + 0xbc) = uVar4;
    }
  }
  return in_lr;
}


