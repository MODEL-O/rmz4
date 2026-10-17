// undefined FUN_08114ce4(void)
// entry 0x8114ce4


undefined4 FUN_08114ce4(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 3) < 0x23) {
                    /* WARNING: Could not recover jumptable at 0x08114cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(PTR_PTR_08114cfc + (uint)*(byte *)(param_1 + 3) * 4))();
    return uVar4;
  }
  if ((*(short *)(DAT_08114dd8 + 2) != 0) && (*(short *)(DAT_08114dd8 + 2) != 4)) {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0810e584(0x28);
  *(undefined2 *)(param_1 + 10) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  if ((*(short *)(DAT_08114dd8 + 2) != 0) && (*(short *)(DAT_08114dd8 + 2) != 4)) {
    return in_lr;
  }
  sVar3 = FUN_08117a68(param_1);
  if (sVar3 == 0) {
    return in_lr;
  }
  if (sVar3 < 1) {
    if (sVar3 == -1) {
      if ((*(byte *)(DAT_08114e08 + 5) & 1) == 0) {
        bVar1 = *(byte *)(DAT_08114e08 + 7);
        if ((bVar1 & 8) == 0) {
          if ((bVar1 & 4) == 0) {
            if ((bVar1 & 2) == 0) {
              if (((bVar1 & 1) == 0) && (bVar1 = *(byte *)(DAT_08114e08 + 6), (bVar1 & 0x80) == 0))
              {
                if ((bVar1 & 0x40) == 0) {
                  if (((bVar1 & 0x20) == 0) && ((bVar1 & 0x10) == 0)) {
                    if ((bVar1 & 8) == 0) {
                      if ((bVar1 & 4) == 0) {
                        uVar4 = DAT_08114ec8;
                        if ((bVar1 & 2) != 0) goto LAB_08114fdc;
                        if ((bVar1 & 1) == 0) {
                          if ((*(byte *)(DAT_08114e08 + 5) & 0x80) == 0) {
                            FUN_0810e5f0(DAT_08114f0c);
                          }
                          else {
                            FUN_0810e5f0(DAT_08114ef4);
                          }
                        }
                        else {
                          FUN_0810e5f0(DAT_08114edc);
                        }
                      }
                      else {
                        FUN_0810e5f0(DAT_08114eb8);
                      }
                    }
                    else {
                      FUN_0810e5f0(DAT_08114ea4);
                    }
                  }
                  else {
                    FUN_0810e5f0(DAT_08114e90);
                  }
                }
                else {
                  FUN_0810e5f0(DAT_08114e70);
                }
              }
              else {
                FUN_0810e5f0(DAT_08114e5c);
              }
            }
            else {
              FUN_0810e5f0(DAT_08114e3c);
            }
          }
          else {
            FUN_0810e5f0(DAT_08114e24);
          }
        }
        else {
          FUN_0810e5f0(DAT_08114e0c);
        }
        *(byte *)(DAT_08114f10 + 5) = *(byte *)(DAT_08114f10 + 5) | 1;
      }
      else {
        bVar1 = *(byte *)(DAT_08114e08 + 7);
        if ((bVar1 & 8) == 0) {
          if ((bVar1 & 4) == 0) {
            if ((bVar1 & 2) == 0) {
              if (((bVar1 & 1) == 0) && (bVar1 = *(byte *)(DAT_08114e08 + 6), (bVar1 & 0x80) == 0))
              {
                if ((bVar1 & 0x40) == 0) {
                  if (((bVar1 & 0x20) == 0) && ((bVar1 & 0x10) == 0)) {
                    if ((bVar1 & 8) == 0) {
                      if ((bVar1 & 4) == 0) {
                        uVar4 = DAT_08114fe4;
                        if ((bVar1 & 2) != 0) {
LAB_08114fdc:
                          FUN_0810e5f0(uVar4);
                          *(undefined1 *)(param_1 + 3) = 0x20;
                          return in_lr;
                        }
                        if ((bVar1 & 1) == 0) {
                          if ((*(byte *)(DAT_08114e08 + 5) & 0x80) == 0) {
                            FUN_0810e5f0(DAT_08115018);
                          }
                          else {
                            FUN_0810e5f0(0x234);
                          }
                        }
                        else {
                          FUN_0810e5f0(DAT_08114ff8);
                        }
                      }
                      else {
                        FUN_0810e5f0(0x240);
                      }
                    }
                    else {
                      FUN_0810e5f0(DAT_08114fbc);
                    }
                  }
                  else {
                    FUN_0810e5f0(0x244);
                  }
                }
                else {
                  FUN_0810e5f0(0x248);
                }
              }
              else {
                FUN_0810e5f0(DAT_08114f78);
              }
            }
            else {
              FUN_0810e5f0(DAT_08114f54);
            }
          }
          else {
            FUN_0810e5f0(0x250);
          }
        }
        else {
          FUN_0810e5f0(DAT_08114f28);
        }
      }
      uVar2 = 0xff;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 3) = uVar2;
  return in_lr;
}


