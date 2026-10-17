// undefined FUN_0807bf18(void)
// entry 0x807bf18


undefined4 FUN_0807bf18(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  byte local_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  FUN_08129258(local_34,DAT_0807c078,8);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_0807c07c);
    FUN_08001d30(DAT_0807c080,
                 ((uint)*(ushort *)(DAT_0807c084 + 0x168) -
                 (uint)(*(ushort *)(DAT_0807c080 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0807c088,
                 ((uint)*(ushort *)(DAT_0807c08c + 0x168) - (uint)*(byte *)(DAT_0807c088 + 7)) *
                 0x20 + 0x200);
    iVar2 = DAT_0807c094;
    iVar5 = (bVar1 >> 4 & 1) * 2;
    local_2c = *(int *)(param_1 + 0x54) + (iVar5 + -1) * 0x2000;
    local_28 = *(int *)(param_1 + 0x58) + DAT_0807c090;
    uVar6 = 0;
    do {
      uVar4 = (uint)local_34[uVar6] + (0x140 - (uint)local_34[uVar6]) * iVar5 & 0xff;
      local_24 = *(short *)((uVar4 + 0x40 & 0xff) * 2 + iVar2) * 0x3c0;
      if (local_24 < 0) {
        local_24 = local_24 + 0xff;
      }
      local_24 = local_24 >> 8;
      local_20 = *(short *)(uVar4 * 2 + iVar2) * 0x3c0;
      if (local_20 < 0) {
        local_20 = local_20 + 0xff;
      }
      local_20 = local_20 >> 8;
      FUN_080b572c(param_1,&local_2c,&local_24,uVar6 & 0xff);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 8);
    FUN_0807e8c8(param_1,10);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807c09c) * 4 +
                        DAT_0807c098)));
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


