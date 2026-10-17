// undefined FUN_080fad7c(void)
// entry 0x80fad7c


undefined4 FUN_080fad7c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  int local_1c [2];
  
  FUN_08129258(auStack_20,DAT_080fae64,2);
  local_1c[0] = *DAT_080fae68;
  local_1c[1] = DAT_080fae68[1];
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar4 = (local_1c[*DAT_080fae6c == 0x10] << 8) >> 0x10;
  iVar6 = iVar4 * 0x14;
  iVar2 = iVar6 + DAT_080fae70;
  iVar4 = iVar4 * 2;
  FUN_08001d30(iVar2,((uint)*(ushort *)(iVar4 + DAT_080fae74) - (uint)(*(ushort *)(iVar2 + 6) >> 6))
                     * 0x20 + 0x10000);
  iVar6 = iVar6 + DAT_080fae78;
  FUN_08002208(iVar6,((uint)*(ushort *)(iVar4 + DAT_080fae7c) - (uint)*(byte *)(iVar6 + 7)) * 0x20 +
                     0x200);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fae80);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0xd) = auStack_20[bVar1];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),iVar2 + DAT_080fae84);
  *(int *)(param_1 + 0x54) = iVar4 + 0x6800;
  *(int *)(param_1 + 0x58) = iVar2;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  do {
    FUN_080fad08(param_1,uVar5 & 0xff);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 3);
  FUN_080fafc4(param_1);
  return in_lr;
}


