// undefined FUN_08031f68(void)
// entry 0x8031f68


undefined4 FUN_08031f68(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x156);
  uVar3 = DAT_08031f98;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      uVar3 = DAT_08031f90;
      if (bVar1 != 0) goto LAB_08031fb4;
    }
    else {
      uVar3 = DAT_08031fa8;
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          FUN_0801cf00(param_1,DAT_08031fe8);
        }
        goto LAB_08031fb4;
      }
    }
  }
  FUN_0801cf00(param_1,uVar3);
LAB_08031fb4:
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  sVar2 = FUN_080386d4(param_1);
  *(int *)(param_1 + 0x5c) = (int)sVar2;
  FUN_08002b10(0xd);
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_08031fec(param_1);
  return in_lr;
}


