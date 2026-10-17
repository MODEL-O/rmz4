// undefined FUN_080fe400(void)
// entry 0x80fe400


undefined4 FUN_080fe400(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080fe468);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 0x1e;
    iVar1 = DAT_080fe46c;
    *(undefined1 *)(iVar3 + 9) = 0x2f;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0xbc);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
    *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
    uVar2 = FUN_080146bc(param_2,param_3);
    *(ushort *)(DAT_080fe470 + DAT_080fe474) = uVar2;
    if (uVar2 == 0xd7) {
      uVar4 = (DAT_080fe478 & param_2) + 0x1000;
    }
    else if ((uVar2 == 0xd8) || ((uVar2 & 1) != 0)) {
      uVar4 = DAT_080fe4cc & param_2;
    }
    else {
      uVar4 = (DAT_080fe494 & param_2) + 0x1000;
    }
    *(uint *)(iVar3 + 0x54) = uVar4;
    *(uint *)(iVar3 + 0x58) = (DAT_080fe4cc & param_3) + 0x1000;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(char *)(iVar3 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
    FUN_080fe4d0(iVar3 + 0x54,0);
    FUN_08014720(param_2,param_3);
  }
  return in_lr;
}


