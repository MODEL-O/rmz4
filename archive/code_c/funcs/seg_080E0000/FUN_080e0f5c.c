// undefined FUN_080e0f5c(void)
// entry 0x80e0f5c


undefined4 FUN_080e0f5c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x2a);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0c88(1,&local_14);
    FUN_080e1024(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (cVar1 == '\0') goto LAB_080e0fb8;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  cVar1 = *(char *)(DAT_080e0fd4 + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080e0fd4 + 0x26) = cVar1 + -1;
  }
LAB_080e0fb8:
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0fd8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


