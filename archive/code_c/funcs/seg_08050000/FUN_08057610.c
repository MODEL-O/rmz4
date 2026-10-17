// undefined FUN_08057610(void)
// entry 0x8057610


undefined4 FUN_08057610(int param_1)

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
    iVar3 = FUN_0805977c(param_1);
    uVar6 = (uint)*(ushort *)(iVar3 * 2 + DAT_0805771c);
    uVar4 = FUN_08059a9c(param_1);
    local_20 = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0xc00;
    local_1c = *(int *)(param_1 + 0x58) + DAT_08057720;
    local_18 = uVar6 * (int)*(short *)((uVar4 * 0x1000000 + 0x40000000 >> 0x17) + DAT_08057724);
    if (local_18 < 0) {
      local_18 = local_18 + 0xff;
    }
    local_18 = local_18 >> 8;
    local_14 = uVar6 * (int)*(short *)((uVar4 & 0xff) * 2 + DAT_08057724);
    if (local_14 < 0) {
      local_14 = local_14 + 0xff;
    }
    local_14 = local_14 >> 8;
    uVar5 = FUN_080c0d28(param_1,&local_20,&local_18,1);
    *(undefined4 *)(param_1 + 0xd8) = uVar5;
    FUN_0801cf00(param_1,DAT_08057728);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08057730) * 4 + DAT_0805772c)) * 0x18 + DAT_08057734);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 8;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


