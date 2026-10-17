// undefined FUN_080e9998(void)
// entry 0x80e9998


undefined4 FUN_080e9998(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  if ((*(byte *)(DAT_080e99b4 + 0x14) & 0x40) == 0) {
    bVar1 = 0x12;
  }
  else {
    bVar1 = 0x13;
  }
  pbVar4 = (byte *)(param_1 + 0xb8);
  *pbVar4 = bVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = FUN_08005500(*DAT_080e9a68);
    if (iVar2 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
    *(undefined1 *)(iVar2 + 0x25) = 0x1e;
    iVar5 = DAT_080e9a6c;
    *(undefined1 *)(iVar2 + 9) = 1;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar5 + 4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined1 *)(iVar2 + 0x11) = 1;
    *(int *)(iVar2 + 0x28) = param_1;
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080e9a70;
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    iVar6 = (uint)*pbVar4 * 0x14;
    iVar2 = iVar6 + DAT_080e9a74;
    iVar5 = (uint)*pbVar4 * 2;
    FUN_08001d30(iVar2,((uint)*(ushort *)(iVar5 + DAT_080e9a78) -
                       (uint)(*(ushort *)(iVar2 + 6) >> 6)) * 0x20 + 0x10000);
    iVar6 = iVar6 + DAT_080e9a7c;
    FUN_08002208(iVar6,((uint)*(ushort *)(iVar5 + DAT_080e9a80) - (uint)*(byte *)(iVar6 + 7)) * 0x20
                       + 0x200);
  }
  else {
    FUN_0801cf00(param_1,(uint)*pbVar4 << 8);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9af4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_080e9af8(param_1);
  return in_lr;
}


