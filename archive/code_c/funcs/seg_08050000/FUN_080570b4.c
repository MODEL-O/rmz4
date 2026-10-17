// undefined FUN_080570b4(void)
// entry 0x80570b4


undefined4 FUN_080570b4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xfc);
    FUN_08001d30(DAT_080571f4,
                 ((uint)*(ushort *)(DAT_080571f8 + 0x74) -
                 (uint)(*(ushort *)(DAT_080571f4 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_080571fc,
                 ((uint)*(ushort *)(DAT_08057200 + 0x74) - (uint)*(byte *)(DAT_080571fc + 7)) * 0x20
                 + 0x200);
    iVar3 = FUN_0805977c(param_1);
    uVar6 = (uint)*(ushort *)(iVar3 * 2 + DAT_08057204);
    uVar4 = FUN_08059a9c(param_1);
    local_20 = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0xc00;
    local_1c = *(int *)(param_1 + 0x58) + DAT_08057208;
    local_18 = uVar6 * (int)*(short *)((uVar4 * 0x1000000 + 0x40000000 >> 0x17) + DAT_0805720c);
    if (local_18 < 0) {
      local_18 = local_18 + 0xff;
    }
    local_18 = local_18 >> 8;
    local_14 = uVar6 * (int)*(short *)((uVar4 & 0xff) * 2 + DAT_0805720c);
    if (local_14 < 0) {
      local_14 = local_14 + 0xff;
    }
    local_14 = local_14 >> 8;
    uVar5 = FUN_080c0d28(param_1,&local_20,&local_18,0);
    *(undefined4 *)(param_1 + 0xd4) = uVar5;
    FUN_0801cf00(param_1,DAT_08057210);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08057218) * 4 + DAT_08057214)) * 0x18 + DAT_0805721c);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


