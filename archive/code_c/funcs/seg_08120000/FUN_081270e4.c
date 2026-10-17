// undefined FUN_081270e4(void)
// entry 0x81270e4


void FUN_081270e4(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*DAT_08127380;
  if (((uint)(*piVar2 - DAT_08127384) < 2) &&
     (bVar1 = *(byte *)(piVar2 + 1), iVar3 = bVar1 - 1, *(char *)(piVar2 + 1) = (char)iVar3,
     iVar3 == 0 || bVar1 == 0)) {
    *(undefined1 *)(piVar2 + 1) = *(undefined1 *)((int)piVar2 + 0xb);
    iVar3 = DAT_08127118;
    if ((*(uint *)(DAT_08127118 + 8) & 0x2000000) != 0) {
      *(undefined4 *)(DAT_08127118 + 8) = DAT_0812711c;
    }
    *(undefined2 *)(iVar3 + 10) = 0x400;
    *(undefined2 *)(iVar3 + 10) = 0xb600;
  }
  return;
}


