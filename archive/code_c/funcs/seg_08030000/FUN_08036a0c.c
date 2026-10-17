// undefined FUN_08036a0c(void)
// entry 0x8036a0c


undefined4 FUN_08036a0c(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 199) < 4) {
    uVar1 = *(uint *)(param_1 + 600);
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) == 0) {
        FUN_0801cf00(param_1,DAT_08036af4);
        *(undefined1 *)(param_1 + DAT_08036af8) = 0;
      }
      else if ((uVar1 & 0x30) == 0) {
        FUN_0801cf00(param_1,DAT_08036ac0);
        *(undefined1 *)(param_1 + DAT_08036ac4) = 4;
      }
      else {
        FUN_0801cf00(param_1,DAT_08036aa4);
        *(undefined1 *)(param_1 + DAT_08036aa8) = 2;
      }
    }
    else if ((uVar1 & 0x30) == 0) {
      FUN_0801cf00(param_1,0x2b00);
      *(undefined1 *)(param_1 + DAT_08036a7c) = 3;
    }
    else {
      FUN_0801cf00(param_1,DAT_08036a60);
      *(undefined1 *)(param_1 + DAT_08036a64) = 1;
    }
  }
  else {
    FUN_0801cf00(param_1,DAT_08036a2c);
    *(undefined1 *)(param_1 + DAT_08036a30) = 0;
  }
  *(undefined1 *)(param_1 + 0x152) = 4;
  *(undefined1 *)(param_1 + 0x101) = 1;
  FUN_08036afc(param_1);
  return in_lr;
}


