// undefined FUN_08100a24(void)
// entry 0x8100a24


undefined4 FUN_08100a24(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_08100a64;
  *(undefined2 *)(DAT_08100a64 + 0xfe) = 0x3e0;
  iVar4 = DAT_08100a68;
  *(undefined2 *)(DAT_08100a68 + 0xfe) = 10;
  *(undefined2 *)(iVar1 + 0x100) = 0x3e0;
  *(undefined2 *)(iVar4 + 0x100) = 10;
  if ((*(byte *)(DAT_08100a6c + 0x14) & 0x80) == 0) {
    *(undefined1 *)(param_1 + 0xb8) = 0x7f;
  }
  else {
    *(undefined1 *)(param_1 + 0xb8) = 0x80;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = FUN_08005500(*DAT_08100b24);
    if (iVar1 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08100b28;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
    *(undefined1 *)(iVar1 + 0x25) = 0x1e;
    iVar4 = DAT_08100b2c;
    *(undefined1 *)(iVar1 + 9) = 0x3c;
    *(undefined4 *)(iVar1 + 0x14) = **(undefined4 **)(iVar4 + 0xf0);
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined1 *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined1 *)(iVar1 + 0x1d) = *(undefined1 *)(iVar1 + 0x1c);
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08100b30;
    uVar3 = (uint)*(byte *)(param_1 + 0xb8);
    iVar5 = uVar3 * 0x14;
    iVar1 = iVar5 + DAT_08100b34;
    iVar4 = uVar3 * 2;
    FUN_08001d30(iVar1,((uint)*(ushort *)(iVar4 + DAT_08100b38) -
                       (uint)(*(ushort *)(iVar1 + 6) >> 6)) * 0x20 + 0x10000);
    iVar5 = iVar5 + DAT_08100b3c;
    FUN_08002208(iVar5,((uint)*(ushort *)(iVar4 + DAT_08100b40) - (uint)*(byte *)(iVar5 + 7)) * 0x20
                       + 0x200);
  }
  else {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08100bbc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_08100bc0(param_1);
  return in_lr;
}


