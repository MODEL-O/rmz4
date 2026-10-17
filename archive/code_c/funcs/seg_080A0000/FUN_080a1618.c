// undefined FUN_080a1618(void)
// entry 0x80a1618


undefined4 FUN_080a1618(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080a1700);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_08002b10(0x2a);
    uVar2 = DAT_080a1708 * *DAT_080a1704 + DAT_080a170c;
    local_20 = *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar2 = DAT_080a1708 * (uVar2 & 0x7fffffff) + DAT_080a170c;
    *DAT_080a1704 = uVar2 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    FUN_080d0c88(1,&local_20);
    FUN_080a1c3c(param_1);
    FUN_0802ab88(4,5,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(ushort *)(DAT_080a1710 + 0xc) <= DAT_080a1714) {
      *(ushort *)(DAT_080a1710 + 0xc) = *(ushort *)(DAT_080a1710 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


