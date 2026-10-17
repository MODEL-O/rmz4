// undefined FUN_080cb7b8(void)
// entry 0x80cb7b8


undefined4 FUN_080cb7b8(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    iVar5 = DAT_080cb808;
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      *(int *)(param_1 + 0x5c) =
           (int)*(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080cb808) << 2;
      *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar5) << 2;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (sVar1 = FUN_08007c7c(iVar4,iVar5), sVar1 != 0)) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cb858);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_080cb5a4(param_1);
    }
  }
  return in_lr;
}


