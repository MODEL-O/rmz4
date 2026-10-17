// undefined FUN_0803c27c(void)
// entry 0x803c27c


undefined8 FUN_0803c27c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar4 = 0;
  uVar2 = (uint)*(byte *)(param_1 + 0x71);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    bVar1 = *(byte *)(param_1 + 10);
    if (((~(*(byte *)(iVar3 + 10) >> 4) & 1) == (bVar1 >> 4 & 1)) ||
       (*(char *)(param_1 + 0xe) != '\0')) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      if (*(char *)(param_1 + 0x72) < '\x02') {
        if ((bVar1 & 0x10) == 0) {
          iVar3 = *(int *)(param_1 + 0x54) - (int)*(short *)(uVar2 * 2 + param_2);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x54) + (int)*(short *)(uVar2 * 2 + param_2);
        }
        *(int *)(param_1 + 0x54) = iVar3;
        if (3 < uVar2 + 1) {
          uVar4 = 1;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0xb8);
      if ((*(char *)(param_1 + 0x72) < '\x02') && (uVar2 = uVar2 + 1 & 0xff, 3 < uVar2)) {
        uVar4 = 1;
      }
      if ((bVar1 & 0x10) == 0) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (int)*(short *)(uVar2 * 2 + param_2)
          ;
        }
      }
      else {
        for (; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)*(short *)(uVar2 * 2 + param_2)
          ;
        }
      }
    }
  }
  else {
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}


