// undefined FUN_080c4808(void)
// entry 0x80c4808


undefined4 FUN_080c4808(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080c485c);
    *(undefined1 *)(param_1 + 0xb8) = 1;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080c44dc(param_1,&local_1c);
    FUN_0801ce54(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
    FUN_0801cf00(param_1,DAT_080c48d8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080c48dc;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  *(ushort *)(param_1 + 0x50) = (0x10 - (ushort)*(byte *)(param_1 + 0x12)) * 0xe;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


