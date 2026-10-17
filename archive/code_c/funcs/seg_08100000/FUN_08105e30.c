// undefined FUN_08105e30(void)
// entry 0x8105e30


undefined4 FUN_08105e30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    iVar2 = DAT_08105ef0;
    iVar1 = DAT_08105eec;
    iVar4 = (uint)*(byte *)(param_1 + 0x11) * 8;
    iVar5 = *(short *)(iVar4 + DAT_08105eec) * 2;
    *(undefined2 *)(iVar5 + DAT_08105ef0) = *(undefined2 *)(iVar4 + DAT_08105eec + 4);
    iVar4 = DAT_08105ef4;
    *(ushort *)(iVar5 + DAT_08105ef4) = *(byte *)(param_1 + 0x11) + 4;
    iVar6 = (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar1);
    iVar7 = iVar6 * 0x14;
    iVar5 = iVar7 + DAT_08105ef8;
    iVar6 = iVar6 * 2;
    FUN_08001d30(iVar5,((uint)*(ushort *)(iVar6 + iVar2) - (uint)(*(ushort *)(iVar5 + 6) >> 6)) *
                       0x20 + 0x10000);
    iVar7 = iVar7 + DAT_08105efc;
    FUN_08002208(iVar7,((uint)*(ushort *)(iVar6 + iVar4) - (uint)*(byte *)(iVar7 + 7)) * 0x20 +
                       0x200);
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar1 + 2));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


