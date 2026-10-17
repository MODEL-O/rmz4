// undefined FUN_0803a428(void)
// entry 0x803a428


undefined8 FUN_0803a428(int param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x14a);
    bVar2 = *(byte *)(param_1 + 0xc0);
  }
  else {
    bVar1 = *(byte *)(param_1 + DAT_0803a468);
    bVar2 = *(byte *)(param_1 + 0xc1);
  }
  iVar5 = 0;
  if ((int)-(bVar2 ^ 4) < 0) {
    cVar3 = *(char *)(param_1 + 0xc4);
    if (cVar3 == '\x04') {
      iVar5 = 1;
    }
    else if (cVar3 == '\x05') {
      iVar5 = 2;
    }
    else if (cVar3 == '\x06') {
      iVar5 = 3;
    }
  }
  if (bVar1 < *(byte *)(iVar5 + DAT_0803a488)) {
    if (bVar1 < *(byte *)(iVar5 + DAT_0803a49c)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 2;
  }
  return CONCAT44(in_lr,uVar4);
}


