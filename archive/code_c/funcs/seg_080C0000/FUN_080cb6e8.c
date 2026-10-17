// undefined FUN_080cb6e8(void)
// entry 0x80cb6e8


undefined4 FUN_080cb6e8(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar4 = *(undefined4 *)(iVar6 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      uVar2 = FUN_08128bdc((*(int *)(param_1 + 0x54) - *(int *)(*DAT_080cb760 + 0x54)) * 0x100 >>
                           0x10,((*(int *)(param_1 + 0x58) + 0xf00) - *(int *)(*DAT_080cb760 + 0x58)
                                ) * 0x100 >> 0x10);
      iVar6 = DAT_080cb764;
      uVar2 = ((uVar2 & 0xffff) >> 8) + 0x80;
      *(int *)(param_1 + 0x5c) =
           (int)*(short *)((uVar2 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080cb764) << 2;
      *(int *)(param_1 + 0x60) = (int)*(short *)((uVar2 & 0xff) * 2 + iVar6) << 2;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (sVar1 = FUN_08007c7c(iVar5,iVar6), sVar1 != 0)) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cb7b4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080cb5a4(param_1);
    }
  }
  return in_lr;
}


