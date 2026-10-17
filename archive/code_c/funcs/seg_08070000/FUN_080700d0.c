// undefined FUN_080700d0(void)
// entry 0x80700d0


undefined4 FUN_080700d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  byte bVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080701b0 + 0x54);
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080701b4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar10 = *(undefined4 *)(param_1 + 0x54);
  uVar11 = *(undefined4 *)(param_1 + 0x58);
  uVar8 = FUN_08008988(uVar10,uVar11,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar8;
  iVar9 = FUN_08008748(uVar10,uVar11);
  *(int *)(param_1 + 0xd0) = iVar9;
  *(int *)(param_1 + 0x58) = iVar9 + DAT_080701b8;
  *(undefined1 *)(param_1 + 0xb8) = 0xff;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0xff;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 2;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar6 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar6 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar6;
  FUN_080503cc(param_1,*(undefined4 *)*DAT_080702c0,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_080702c4;
  iVar3 = DAT_080702d0;
  iVar2 = DAT_080702cc;
  iVar9 = DAT_080702c8;
  FUN_08001d30(DAT_080702c8 + DAT_080702cc,
               ((uint)*(ushort *)(DAT_080702d0 + 0x124) -
               (uint)(*(ushort *)(DAT_080702c8 + DAT_080702cc + 6) >> 6)) * 0x20 + 0x10000);
  iVar4 = DAT_080702d8;
  FUN_08002208(iVar9 + DAT_080702d4,
               ((uint)*(ushort *)(DAT_080702d8 + 0x124) - (uint)*(byte *)(iVar9 + DAT_080702d4 + 7))
               * 0x20 + 0x200);
  FUN_08001d30(iVar2 + 0xb40,
               ((uint)*(ushort *)(iVar3 + 0x120) - (uint)(*(ushort *)(iVar2 + 0xb46) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(DAT_080702d4 + 0xb40,
               ((uint)*(ushort *)(iVar4 + 0x120) - (uint)*(byte *)(DAT_080702d4 + 0xb47)) * 0x20 +
               0x200);
  iVar9 = DAT_080702dc;
  FUN_08001d30(iVar2 + DAT_080702dc,
               ((uint)*(ushort *)(iVar3 + 0x122) -
               (uint)(*(ushort *)(iVar2 + DAT_080702dc + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar9 + DAT_080702d4,
               ((uint)*(ushort *)(iVar4 + 0x122) - (uint)*(byte *)(iVar9 + DAT_080702d4 + 7)) * 0x20
               + 0x200);
  if ((((*(byte *)(DAT_080702e0 + DAT_080702e4) & 0x10) == 0) ||
      ((*(byte *)(DAT_080702e8 + 4) & 4) != 0)) && (*DAT_080702ec != 0x10)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  uVar8 = FUN_080faca0(param_1 + 0x54,uVar8);
  *(undefined4 *)(param_1 + 0xb4) = uVar8;
  puVar5 = DAT_0807033c;
  *DAT_0807033c = *DAT_0807033c | 0x8000;
  *(undefined1 *)((int)puVar5 + 0xf) = 0xfd;
  *(undefined1 *)(puVar5 + 7) = 0xff;
  FUN_0800249c(0x7a,0x2a0);
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_08070340(param_1);
  return in_lr;
}


