// undefined FUN_080a194c(void)
// entry 0x80a194c


undefined4 FUN_080a194c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') goto LAB_080a1980;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  cVar1 = *(char *)(DAT_080a1998 + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080a1998 + 0x26) = cVar1 + -1;
  }
LAB_080a1980:
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a199c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


