// undefined FUN_080d522c(void)
// entry 0x80d522c


undefined4 FUN_080d522c(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_080d5280;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080d5280 = *DAT_080d5280 | 0x4000;
    *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)(param_1 + 0x7c);
    *(byte *)(puVar1 + 7) = (byte)puVar1[7] | *(byte *)(param_1 + 0x7d);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x77) != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d5284);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


