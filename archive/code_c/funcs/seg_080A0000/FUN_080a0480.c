// undefined FUN_080a0480(void)
// entry 0x80a0480


undefined4 FUN_080a0480(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080a0570);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_08002b10(0x2a);
    uVar2 = DAT_080a0578 * *DAT_080a0574 + DAT_080a057c;
    local_20 = *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar2 = DAT_080a0578 * (uVar2 & 0x7fffffff) + DAT_080a057c;
    *DAT_080a0574 = uVar2 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    FUN_080d0c88(1,&local_20);
    FUN_080a0c18(param_1);
    FUN_0802ab88(4,0x23,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(ushort *)(DAT_080a0580 + 0xc) <= DAT_080a0584) {
      *(ushort *)(DAT_080a0580 + 0xc) = *(ushort *)(DAT_080a0580 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


