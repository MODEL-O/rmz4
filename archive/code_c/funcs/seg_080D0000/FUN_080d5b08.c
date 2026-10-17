// undefined FUN_080d5b08(void)
// entry 0x80d5b08


undefined4 FUN_080d5b08(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_080d5b5c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080d5b5c = *DAT_080d5b5c | 0x4000;
    *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)(param_1 + 0x78);
    *(byte *)(puVar1 + 7) = (byte)puVar1[7] | *(byte *)(param_1 + 0x79);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x77) != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d5b60);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


