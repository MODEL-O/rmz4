// undefined FUN_080a0924(void)
// entry 0x80a0924


undefined4 FUN_080a0924(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = DAT_080a09ac;
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar3 = *(int *)(iVar4 + 0x54);
    if (iVar2 < iVar3) {
      *(undefined1 *)(iVar4 + 0xb8) = 0;
      piVar5 = DAT_080a094c;
    }
    else if (iVar3 < iVar2) {
      *(undefined1 *)(iVar4 + 0xb8) = 1;
      piVar5 = DAT_080a0960;
    }
    else {
      *(bool *)(iVar4 + 0xb8) = iVar3 < *(int *)(*DAT_080a09ac + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar5 != 0)) {
      uVar1 = FUN_0803a578(*piVar5,5,2);
      *(undefined1 *)(iVar4 + 0xb9) = uVar1;
    }
  }
  return in_lr;
}


