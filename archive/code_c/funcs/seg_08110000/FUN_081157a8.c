// undefined FUN_081157a8(void)
// entry 0x81157a8


undefined4 FUN_081157a8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 3) < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x081157ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(PTR_PTR_081157bc + (uint)*(byte *)(param_1 + 3) * 4))();
    return uVar5;
  }
  if ((*(short *)(DAT_0811585c + 2) == 0) || (*(short *)(DAT_0811585c + 2) == 4)) {
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_0810e584(0x29);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    if (((*(short *)(DAT_0811585c + 2) == 0) || (*(short *)(DAT_0811585c + 2) == 4)) &&
       (sVar4 = FUN_08117a68(param_1), iVar2 = DAT_0811588c, sVar4 != 0)) {
      if (sVar4 < 1) {
        if (sVar4 == -1) {
          if ((*(byte *)(DAT_0811588c + 5) & 2) == 0) {
            bVar1 = *(byte *)(DAT_0811588c + 7);
            if ((bVar1 & 8) == 0) {
              if ((bVar1 & 4) == 0) {
                if ((bVar1 & 2) == 0) {
                  if (((bVar1 & 1) == 0) &&
                     (bVar1 = *(byte *)(DAT_0811588c + 6), (bVar1 & 0x80) == 0)) {
                    if ((bVar1 & 0x40) == 0) {
                      if ((bVar1 & 0x20) == 0) {
                        if ((bVar1 & 0x10) == 0) {
                          FUN_0810e5f0(DAT_08115918);
                          *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) | 2;
                          *(undefined1 *)(param_1 + 3) = 0x10;
                          return in_lr;
                        }
                        FUN_0810e5f0(DAT_08115930);
                      }
                      else {
                        FUN_0810e5f0(DAT_081158f8);
                      }
                    }
                    else {
                      FUN_0810e5f0(DAT_081158e4);
                    }
                  }
                  else {
                    FUN_0810e5f0(0x284);
                  }
                }
                else {
                  FUN_0810e5f0(0x288);
                }
              }
              else {
                FUN_0810e5f0(DAT_081158a0);
              }
            }
            else {
              FUN_0810e5f0(0x28c);
            }
            *(byte *)(DAT_08115934 + 5) = *(byte *)(DAT_08115934 + 5) | 2;
          }
          else {
            bVar1 = *(byte *)(DAT_0811588c + 7);
            if ((bVar1 & 8) == 0) {
              if ((bVar1 & 4) == 0) {
                if ((bVar1 & 2) == 0) {
                  if (((bVar1 & 1) == 0) &&
                     (bVar1 = *(byte *)(DAT_0811588c + 6), (bVar1 & 0x80) == 0)) {
                    if ((bVar1 & 0x40) == 0) {
                      if ((bVar1 & 0x20) == 0) {
                        if ((bVar1 & 0x10) == 0) {
                          FUN_0810e5f0(DAT_081159d4);
                          *(undefined1 *)(param_1 + 3) = 0x10;
                          return in_lr;
                        }
                        FUN_0810e5f0(DAT_081159dc);
                      }
                      else {
                        FUN_0810e5f0(DAT_081159bc);
                      }
                    }
                    else {
                      FUN_0810e5f0(DAT_081159a8);
                    }
                  }
                  else {
                    FUN_0810e5f0(DAT_08115994);
                  }
                }
                else {
                  FUN_0810e5f0(DAT_08115974);
                }
              }
              else {
                FUN_0810e5f0(DAT_08115960);
              }
            }
            else {
              FUN_0810e5f0(DAT_0811594c);
            }
          }
          uVar3 = 0xff;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 3;
      }
      *(undefined1 *)(param_1 + 3) = uVar3;
    }
  }
  return in_lr;
}


