// undefined FUN_080d48f0(void)
// entry 0x80d48f0


undefined4 FUN_080d48f0(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 in_lr;
  
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    if (0x7b < bVar2) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (0x14 < bVar2) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else if ((cVar1 == '\x02') && (0x20 < bVar2)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d4950);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080d3f38(param_1);
  }
  return in_lr;
}


