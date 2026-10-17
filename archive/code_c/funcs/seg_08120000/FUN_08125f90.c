// undefined FUN_08125f90(void)
// entry 0x8125f90


undefined8 FUN_08125f90(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = param_1 + DAT_08125fa8;
  bVar1 = *(byte *)(iVar4 + 0x19);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar3 = FUN_080d3ebc(0);
        *(undefined4 *)(iVar4 + 4) = uVar3;
        FUN_08002b10(0x1e);
        *(char *)(iVar4 + 0x19) = *(char *)(iVar4 + 0x19) + '\x01';
      }
      else if ((bVar1 == 3) && (1 < *(byte *)(*(int *)(iVar4 + 4) + 0xc))) {
        *(char *)(iVar4 + 0x18) = *(char *)(iVar4 + 0x18) + '\x01';
        *(undefined1 *)(iVar4 + 0x19) = 0;
      }
      goto LAB_08126008;
    }
    if (bVar1 != 0) goto LAB_08126008;
    *(undefined1 *)(iVar4 + 0x1c) = 0x3c;
    *(char *)(iVar4 + 0x19) = *(char *)(iVar4 + 0x19) + '\x01';
  }
  iVar4 = param_1 + DAT_08125fdc;
  cVar2 = *(char *)(iVar4 + 0x1c) + -1;
  *(char *)(iVar4 + 0x1c) = cVar2;
  if (cVar2 == -1) {
    *(char *)(iVar4 + 0x19) = *(char *)(iVar4 + 0x19) + '\x01';
  }
LAB_08126008:
  *(undefined1 *)(*(int *)(param_1 + DAT_08126020) + 0x254) = 1;
  return CONCAT44(in_lr,1);
}


