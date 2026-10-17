// undefined FUN_081268f8(void)
// entry 0x81268f8


undefined8 FUN_081268f8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  piVar4 = (int *)(param_1 + DAT_0812691c);
  *(undefined1 *)(*piVar4 + 0x254) = 2;
  bVar1 = *(byte *)((int)piVar4 + 0x19);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar3 = FUN_080d3ebc(0);
        piVar4[1] = iVar3;
        FUN_08002b10(0x1e);
        *(char *)((int)piVar4 + 0x19) = *(char *)((int)piVar4 + 0x19) + '\x01';
      }
      else if ((bVar1 == 3) && (1 < *(byte *)(piVar4[1] + 0xc))) {
        *(char *)(piVar4 + 6) = (char)piVar4[6] + '\x01';
        *(undefined1 *)((int)piVar4 + 0x19) = 0;
        piVar4[0xf] = 1;
      }
      goto LAB_08126980;
    }
    if (bVar1 != 0) goto LAB_08126980;
    *(undefined1 *)(piVar4 + 7) = 0x3c;
    *(char *)((int)piVar4 + 0x19) = *(char *)((int)piVar4 + 0x19) + '\x01';
  }
  param_1 = param_1 + DAT_08126950;
  cVar2 = *(char *)(param_1 + 0x1c) + -1;
  *(char *)(param_1 + 0x1c) = cVar2;
  if (cVar2 == -1) {
    *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + '\x01';
  }
LAB_08126980:
  return CONCAT44(in_lr,1);
}


