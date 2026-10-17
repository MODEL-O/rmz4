// undefined FUN_080977d4(void)
// entry 0x80977d4


undefined4 FUN_080977d4(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    pbVar3 = (byte *)(param_1 + 0xbd);
    bVar1 = *pbVar3;
    *pbVar3 = bVar1 - 2;
    if (0x70 < (byte)(bVar1 - 2)) goto LAB_0809784a;
    *pbVar3 = 0x70;
    *(undefined1 *)(param_1 + 0x12) = 8;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_0809784a;
    }
    if ((bVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0xbd), *(char *)(param_1 + 0xbd) = cVar2 + '\x03',
       0x4a < (byte)(cVar2 + 0x8eU))) goto LAB_0809784a;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0809784a:
  FUN_0801cff0(param_1);
  return in_lr;
}


