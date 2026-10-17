// undefined FUN_0812429c(void)
// entry 0x812429c


undefined8 FUN_0812429c(int param_1)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_1 + DAT_081242e8) + -1;
  *(char *)(param_1 + DAT_081242e8) = cVar1;
  if (cVar1 == -1) {
    local_18 = 0x20000;
    local_14 = 0xf000;
    pcVar3 = (char *)(param_1 + DAT_081242ec);
    cVar1 = FUN_08129198(*pcVar3,10);
    if (cVar1 == '\t') {
      pcVar4 = (char *)(param_1 + DAT_081242f0);
      FUN_080bcd74(&local_18,1,*pcVar4);
    }
    else {
      pcVar4 = (char *)(param_1 + DAT_081243a8);
      FUN_080bcd74(&local_18,0,*pcVar4);
    }
    *(undefined1 *)(param_1 + DAT_081243ac) = 0x40;
    *pcVar3 = *pcVar3 + '\x01';
    *pcVar4 = *pcVar4 + '\x01';
  }
  iVar6 = param_1 + DAT_081243b0;
  if (*(int *)(iVar6 + 0x14) <= DAT_081243b4) {
    pcVar3 = (char *)(param_1 + DAT_081243b8);
    if (*pcVar3 == '\0') {
      FUN_08002b10(0x77);
      *pcVar3 = *pcVar3 + '\x01';
    }
    pbVar2 = (byte *)(param_1 + DAT_081243c0);
    *(int *)(iVar6 + 0x24) = (int)*(short *)((uint)*pbVar2 * 2 + DAT_081243bc) << 4;
    *pbVar2 = *pbVar2 + 1;
  }
  piVar5 = (int *)(param_1 + DAT_081243b0);
  if ((*(uint *)(*piVar5 + 0x8c) & 1) != 0) {
    piVar5[5] = piVar5[5] + -0xb4;
  }
  iVar6 = piVar5[5];
  piVar5[5] = iVar6 + -1;
  if (iVar6 + -1 < 0) {
    piVar5[5] = 0;
  }
  if (piVar5[5] == 0) {
    FUN_08002b5c(0x77);
    FUN_08002b10(DAT_081243c4);
    *(undefined1 *)(*piVar5 + 0x254) = 2;
    *(char *)(piVar5 + 6) = (char)piVar5[6] + '\x01';
    *(undefined1 *)((int)piVar5 + 0x19) = 0;
  }
  return CONCAT44(in_lr,1);
}


