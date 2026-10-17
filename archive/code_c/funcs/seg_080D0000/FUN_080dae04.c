// undefined FUN_080dae04(void)
// entry 0x80dae04


undefined4 FUN_080dae04(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  puVar1 = DAT_080dae58;
  *DAT_080dae58 = *DAT_080dae58 | 0x4000;
  *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)(param_1 + 0x78);
  *(byte *)(puVar1 + 7) = (byte)puVar1[7] | *(byte *)(param_1 + 0x79);
  if (*(char *)(param_1 + 0x77) != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dae5c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


