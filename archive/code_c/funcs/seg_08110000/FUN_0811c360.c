// undefined FUN_0811c360(void)
// entry 0x811c360


undefined4 FUN_0811c360(int param_1)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  iVar3 = param_1 + DAT_0811c4a4;
  *(undefined1 *)(iVar3 + 2) = 0;
  *(undefined1 *)(iVar3 + 4) = 0;
  *(undefined1 *)(iVar3 + 5) = 0;
  *(undefined1 *)(iVar3 + 0x1b) = 0;
  uVar4 = 0;
  iVar3 = param_1 + DAT_0811c4a8;
  do {
    *(undefined1 *)(iVar3 + uVar4) = 0xff;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  FUN_0811c70c(param_1);
  puVar1 = DAT_0811c4ac;
  *DAT_0811c4ac = (ushort)DAT_0811c4b0 & *DAT_0811c4ac & (ushort)DAT_0811c4b4 | 0x1300;
  puVar1[3] = (ushort)DAT_0811c4b8;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_08001d30(DAT_0811c4bc,0x4000);
  FUN_08002208(DAT_0811c4c0,0);
  FUN_08001d30(DAT_0811c4c4,(puVar1[3] & 0xc) * 0x1000);
  FUN_08002208(DAT_0811c4c8,0);
  FUN_080027b8(param_1 + DAT_0811c4cc,DAT_0811c4d0,0x84,0,0);
  FUN_08001d30(DAT_0811c4d4,
               ((uint)*(ushort *)(DAT_0811c4d8 + 0x86) - (uint)(*(ushort *)(DAT_0811c4d4 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_0811c4dc,
               ((uint)*(ushort *)(DAT_0811c4e0 + 0x86) - (uint)*(byte *)(DAT_0811c4dc + 7)) * 0x20 +
               0x200);
  FUN_0810ad38(param_1,0,0);
  FUN_0810ad38(param_1,1,0);
  FUN_0810ad38(param_1,1,1);
  bVar2 = 0;
  do {
    FUN_0810ad38(param_1,2,bVar2);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 7);
  FUN_0800249c(0x2f,0);
  FUN_0800249c(0x31,0);
  FUN_0800249c(0x3a,0);
  *(undefined1 *)(param_1 + DAT_0811c4a4 + 0x1a) = 0x31;
  FUN_08001f1c(param_1 + DAT_0811c4cc,(*DAT_0811c4e4 & 0x1f00) << 3,0x1000);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_0811c4e8(param_1);
  return in_lr;
}


