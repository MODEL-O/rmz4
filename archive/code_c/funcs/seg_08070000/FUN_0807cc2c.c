// undefined FUN_0807cc2c(void)
// entry 0x807cc2c


undefined4 FUN_0807cc2c(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x146);
    FUN_0807e8c8(param_1,0x19);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807cce8) * 4 +
                        DAT_0807cce4)));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  if ((*(char *)(param_1 + 0x13) != '\0') && (bVar2 < 0x19)) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + DAT_0807ccec;
      iVar1 = FUN_080cf36c(param_1,&local_14,0,0);
      *(int *)(param_1 + 0xd0) = iVar1;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  if (bVar2 == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


