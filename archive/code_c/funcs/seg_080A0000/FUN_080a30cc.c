// undefined FUN_080a30cc(void)
// entry 0x80a30cc


undefined4 FUN_080a30cc(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080a318c();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (cVar1 == '\0') goto LAB_080a3124;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  cVar1 = *(char *)(DAT_080a313c + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080a313c + 0x26) = cVar1 + -1;
  }
LAB_080a3124:
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3140);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


