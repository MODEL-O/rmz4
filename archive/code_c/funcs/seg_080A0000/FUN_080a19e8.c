// undefined FUN_080a19e8(void)
// entry 0x80a19e8


undefined4 FUN_080a19e8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  piVar3 = DAT_080a1a70;
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar4 = *(int *)(iVar5 + 0x54);
    if (iVar2 < iVar4) {
      *(undefined1 *)(iVar5 + 0xbb) = 0;
      piVar3 = DAT_080a1a10;
    }
    else if (iVar4 < iVar2) {
      *(undefined1 *)(iVar5 + 0xbb) = 1;
      piVar3 = DAT_080a1a24;
    }
    else {
      *(bool *)(iVar5 + 0xbb) = iVar4 < *(int *)(*DAT_080a1a70 + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar3 != 0)) {
      uVar1 = FUN_0803a578(*piVar3,6,4);
      *(undefined1 *)(iVar5 + 0xbc) = uVar1;
    }
  }
  return in_lr;
}


