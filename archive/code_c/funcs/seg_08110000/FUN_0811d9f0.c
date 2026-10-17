// undefined FUN_0811d9f0(void)
// entry 0x811d9f0


undefined4 FUN_0811d9f0(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  puVar10 = (undefined1 *)(param_1 + DAT_0811db04);
  *puVar10 = 0;
  FUN_0811ea70(param_1);
  puVar2 = DAT_0811db08;
  *DAT_0811db08 = (ushort)DAT_0811db0c & *DAT_0811db08 & (ushort)DAT_0811db10 | 0x1300;
  puVar2[3] = (ushort)DAT_0811db14;
  puVar2[8] = 0;
  puVar2[9] = 0;
  FUN_0800249c(0x3f,0);
  FUN_0800249c(0x40,0);
  puVar10[4] = 0;
  iVar3 = DAT_0811db18;
  if ((*(byte *)(DAT_0811db18 + 5) & 0x20) != 0) {
    puVar10[4] = 1;
  }
  bVar1 = *(byte *)(iVar3 + 6);
  if ((bVar1 & 1) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  if ((bVar1 & 0x20) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  if ((bVar1 & 0x40) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  if ((bVar1 & 0x80) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  bVar1 = *(byte *)(iVar3 + 7);
  if ((bVar1 & 1) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  if ((bVar1 & 2) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  if ((bVar1 & 4) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  if ((bVar1 & 8) != 0) {
    puVar10[4] = puVar10[4] + '\x01';
  }
  FUN_08001d30(DAT_0811db1c,(puVar2[3] & 0xc) << 0xc);
  FUN_08002208(DAT_0811db20,0);
  if ((byte)puVar10[4] < 6) {
    FUN_080027b8(param_1 + DAT_0811db24,DAT_0811db28,0x21,0,0);
  }
  else {
    FUN_080027b8(param_1 + DAT_0811dc04,DAT_0811dc08,0x22,0,0);
  }
  FUN_08001f1c(param_1 + DAT_0811dc04,(*DAT_0811dc0c & 0x1f00) << 3,0x1000);
  iVar5 = DAT_0811dc18;
  iVar4 = DAT_0811dc14;
  iVar3 = DAT_0811dc10;
  FUN_08001d30(DAT_0811dc10 + DAT_0811dc14,
               ((uint)*(ushort *)(DAT_0811dc18 + 0xca) -
               (uint)(*(ushort *)(DAT_0811dc10 + DAT_0811dc14 + 6) >> 6)) * 0x20 + 0x10000);
  iVar7 = DAT_0811dc20;
  iVar6 = DAT_0811dc1c;
  FUN_08002208(iVar3 + DAT_0811dc1c,
               ((uint)*(ushort *)(DAT_0811dc20 + 0xca) - (uint)*(byte *)(iVar3 + DAT_0811dc1c + 7))
               * 0x20 + 0x200);
  FUN_08001d30(iVar4 + 0x7f8,
               ((uint)*(ushort *)(iVar5 + 0xcc) - (uint)(*(ushort *)(iVar4 + 0x7fe) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar6 + 0x7f8,
               ((uint)*(ushort *)(iVar7 + 0xcc) - (uint)*(byte *)(iVar6 + 0x7ff)) * 0x20 + 0x200);
  FUN_0810bc7c(param_1,0,0);
  FUN_0810bc7c(param_1,1,0);
  FUN_0810bc7c(param_1,3,0);
  uVar8 = *(byte *)(param_1 + DAT_0811dc24 + 4) - 1;
  if (8 < uVar8) {
    *(undefined1 *)(param_1 + DAT_0811defc + 5) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_0811eb20(param_1,*DAT_0811df00);
    FUN_0811df04(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0811dc02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(PTR_PTR_0811dc28 + uVar8 * 4))();
  return uVar9;
}


