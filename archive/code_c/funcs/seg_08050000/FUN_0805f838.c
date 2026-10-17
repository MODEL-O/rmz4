// undefined FUN_0805f838(void)
// entry 0x805f838


undefined4 FUN_0805f838(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if ((*(ushort *)(DAT_0805f894 + 8) & 8) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_0805f898 + 0x54);
    if (iVar3 < 0) {
      iVar3 = *(int *)(*DAT_0805f898 + 0x54) - *(int *)(param_1 + 0x54);
    }
    iVar5 = 2;
    if ((0x17 < *(short *)(param_1 + 0xa4)) && (iVar5 = 0, *(short *)(param_1 + 0xa4) < 0x30)) {
      iVar5 = 1;
    }
    if (DAT_0805f89c < iVar3) {
      if (DAT_0805f8ac < iVar3) {
        iVar3 = 2;
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 0;
    }
    if (*DAT_0805f90c == 0xb) {
      do {
        uVar1 = *DAT_0805f910 * DAT_0805f914 + DAT_0805f918;
        *DAT_0805f910 = uVar1 & 0x7fffffff;
        uVar1 = (uVar1 & 0x7fffffff) >> 0x10 & 0x1f;
        if (iVar3 == 0) {
          if (iVar5 == 0) {
            if (uVar1 < 4) goto LAB_0805fa4a;
            if (uVar1 < 8) {
LAB_0805f9e0:
              *(undefined1 *)(param_1 + 0xd) = 6;
            }
            else if (uVar1 < 0x11) {
              uVar4 = 0xe;
LAB_0805fa7c:
              *(undefined1 *)(param_1 + 0xd) = uVar4;
            }
            else {
              if (0x13 < uVar1) {
                if (0x16 < uVar1) {
joined_r0x0805f99c:
                  if (0x1b < uVar1) goto LAB_0805fa76;
                  goto LAB_0805fa6e;
                }
                goto LAB_0805fa66;
              }
LAB_0805f9f2:
              *(undefined1 *)(param_1 + 0xd) = 8;
            }
          }
          else if (iVar5 == 1) {
            if (uVar1 < 3) {
LAB_0805fa4a:
              *(undefined1 *)(param_1 + 0xd) = 4;
            }
            else if (uVar1 < 6) {
LAB_0805f9ae:
              *(undefined1 *)(param_1 + 0xd) = 6;
            }
            else if (uVar1 < 0xd) {
LAB_0805f9b8:
              *(undefined1 *)(param_1 + 0xd) = 0xe;
            }
            else {
              if (uVar1 < 0x10) {
                uVar4 = 8;
                goto LAB_0805fa7c;
              }
              if (uVar1 < 0x13) goto LAB_0805fa66;
              if (uVar1 < 0x17) goto LAB_0805fa6e;
LAB_0805f9ce:
              if (uVar1 < 0x1a) goto LAB_0805fa76;
              *(undefined1 *)(param_1 + 0xd) = 0x1b;
            }
          }
          else {
            if (uVar1 < 2) goto LAB_0805fa4a;
            if (uVar1 < 5) goto LAB_0805f9e0;
            if (uVar1 < 0xc) {
              uVar4 = 0xe;
              goto LAB_0805fa7c;
            }
            if (uVar1 < 0xf) goto LAB_0805f9f2;
            if (uVar1 < 0x12) goto LAB_0805fa66;
            if (uVar1 < 0x15) goto LAB_0805fa6e;
LAB_0805fa00:
            if (uVar1 < 0x18) goto LAB_0805fa76;
            *(undefined1 *)(param_1 + 0xd) = 0x1b;
          }
        }
        else {
          if (iVar3 == 1) {
            if (iVar5 == 0) {
              if (uVar1 < 4) goto LAB_0805fa4a;
              if (uVar1 < 6) goto LAB_0805f9e0;
              if (uVar1 < 0xc) {
                uVar4 = 0xe;
                goto LAB_0805fa7c;
              }
              if (uVar1 < 0x12) goto LAB_0805f9f2;
              if (0x15 < uVar1) goto joined_r0x0805f99c;
            }
            else if (iVar5 == 1) {
              if (uVar1 < 3) goto LAB_0805fa4a;
              if (uVar1 < 5) goto LAB_0805f9ae;
              if (uVar1 < 10) goto LAB_0805f9b8;
              if (uVar1 < 0xe) {
                uVar4 = 8;
                goto LAB_0805fa7c;
              }
              if (0x11 < uVar1) {
                if (0x15 < uVar1) goto LAB_0805f9ce;
                goto LAB_0805fa6e;
              }
            }
            else {
              if (uVar1 < 3) goto LAB_0805fa4a;
              if (uVar1 < 5) goto LAB_0805f9e0;
              if (uVar1 < 8) {
                uVar4 = 0xe;
                goto LAB_0805fa7c;
              }
              if (uVar1 < 0xc) goto LAB_0805f9f2;
              if (0xf < uVar1) {
                if (0x13 < uVar1) goto LAB_0805fa00;
                goto LAB_0805fa6e;
              }
            }
          }
          else if (iVar5 == 0) {
            if (uVar1 < 6) goto LAB_0805fa4a;
            if (uVar1 < 9) goto LAB_0805fa52;
            if (uVar1 < 0xd) goto LAB_0805fa5c;
            if (0x14 < uVar1) {
              if (0x19 < uVar1) goto LAB_0805fa76;
              goto LAB_0805fa6e;
            }
          }
          else if (iVar5 == 1) {
            if (uVar1 < 4) goto LAB_0805fa4a;
            if (uVar1 < 6) {
LAB_0805fa52:
              *(undefined1 *)(param_1 + 0xd) = 0xe;
              goto LAB_0805fa7e;
            }
            if (uVar1 < 10) {
LAB_0805fa5c:
              *(undefined1 *)(param_1 + 0xd) = 8;
              goto LAB_0805fa7e;
            }
            if (0xf < uVar1) {
              if (0x14 < uVar1) {
                if (0x19 < uVar1) {
LAB_0805fa7a:
                  uVar4 = 0x1b;
                  goto LAB_0805fa7c;
                }
LAB_0805fa76:
                *(undefined1 *)(param_1 + 0xd) = 0x18;
                goto LAB_0805fa7e;
              }
LAB_0805fa6e:
              *(undefined1 *)(param_1 + 0xd) = 0x14;
              goto LAB_0805fa7e;
            }
          }
          else {
            if (uVar1 < 4) goto LAB_0805fa4a;
            if (uVar1 < 6) goto LAB_0805fa52;
            if (uVar1 < 9) goto LAB_0805fa5c;
            if (0xe < uVar1) {
              if (0x12 < uVar1) {
                if (0x17 < uVar1) goto LAB_0805fa7a;
                goto LAB_0805fa76;
              }
              goto LAB_0805fa6e;
            }
          }
LAB_0805fa66:
          *(undefined1 *)(param_1 + 0xd) = 0xb;
        }
LAB_0805fa7e:
      } while ((((*(byte *)(*DAT_0805faac + 1) < 5) ||
                (cVar2 = *(char *)(param_1 + 0xd), (*(byte *)(DAT_0805fab0 + 4) & 4) != 0)) &&
               (cVar2 = *(char *)(param_1 + 0xd), cVar2 == '\x1b')) ||
              (cVar2 == *(char *)(param_1 + 0xd0)));
    }
    else {
      do {
        uVar1 = *DAT_0805fafc * DAT_0805fb00 + DAT_0805fb04;
        *DAT_0805fafc = uVar1 & 0x7fffffff;
        uVar1 = (uVar1 & 0x7fffffff) >> 0x10 & 0x1f;
        if (iVar3 == 0) {
          if (iVar5 == 0) {
            if (uVar1 < 3) goto LAB_0805fc78;
            if (uVar1 < 6) {
LAB_0805fb94:
              *(undefined1 *)(param_1 + 0xd) = 6;
              goto LAB_0805fcb4;
            }
            if (0xd < uVar1) {
              if (uVar1 < 0x12) goto LAB_0805fc88;
              if (uVar1 < 0x15) goto LAB_0805fc92;
              if (0x18 < uVar1) goto joined_r0x0805fbb0;
LAB_0805fc9c:
              *(undefined1 *)(param_1 + 0xd) = 0x14;
              goto LAB_0805fcb4;
            }
            uVar4 = 0xe;
          }
          else if (iVar5 == 1) {
            if (uVar1 < 2) goto LAB_0805fc78;
            if (uVar1 < 6) {
LAB_0805fbc2:
              *(undefined1 *)(param_1 + 0xd) = 6;
              goto LAB_0805fcb4;
            }
            if (uVar1 < 0xe) goto LAB_0805fc4a;
            if (0x10 < uVar1) {
              if (uVar1 < 0x14) goto LAB_0805fc5c;
              if (0x15 < uVar1) {
LAB_0805fb4c:
                if (uVar1 < 0x19) goto LAB_0805fca4;
                if (uVar1 < 0x1c) goto LAB_0805fcac;
LAB_0805fc6e:
                *(undefined1 *)(param_1 + 0xd) = 0x1f;
                goto LAB_0805fcb4;
              }
              goto LAB_0805fc9c;
            }
            uVar4 = 8;
          }
          else {
            if (uVar1 < 3) goto LAB_0805fc78;
            if (uVar1 < 7) {
              uVar4 = 6;
            }
            else {
              if (uVar1 < 0xe) goto LAB_0805fc1a;
              if (uVar1 < 0x10) goto LAB_0805fc24;
              if (0x11 < uVar1) {
                if (0x14 < uVar1) {
LAB_0805fbfe:
                  if (uVar1 < 0x17) goto LAB_0805fca4;
                  if (uVar1 < 0x1a) goto LAB_0805fcac;
                  *(undefined1 *)(param_1 + 0xd) = 0x1f;
                  goto LAB_0805fcb4;
                }
                goto LAB_0805fc9c;
              }
              uVar4 = 0xb;
            }
          }
LAB_0805fcb2:
          *(undefined1 *)(param_1 + 0xd) = uVar4;
        }
        else {
          if (iVar3 == 1) {
            if (iVar5 == 0) {
              if (uVar1 < 3) goto LAB_0805fc78;
              if (uVar1 < 5) goto LAB_0805fb94;
              if (8 < uVar1) {
                if (uVar1 < 0xe) goto LAB_0805fc88;
                if (uVar1 < 0x13) goto LAB_0805fc92;
                if (0x17 < uVar1) goto joined_r0x0805fbb0;
                goto LAB_0805fc9c;
              }
              uVar4 = 0xe;
            }
            else if (iVar5 == 1) {
              if (uVar1 < 3) goto LAB_0805fc78;
              if (uVar1 < 5) goto LAB_0805fbc2;
              if (uVar1 < 9) goto LAB_0805fc4a;
              if (0xc < uVar1) {
                if (uVar1 < 0x11) goto LAB_0805fc5c;
                if (0x14 < uVar1) goto LAB_0805fb4c;
                goto LAB_0805fc9c;
              }
              uVar4 = 8;
            }
            else {
              if (uVar1 < 3) goto LAB_0805fc78;
              if (uVar1 < 6) {
                uVar4 = 6;
              }
              else {
                if (uVar1 < 9) goto LAB_0805fc1a;
                if (uVar1 < 0xc) goto LAB_0805fc24;
                if (0xf < uVar1) {
                  if (0x12 < uVar1) goto LAB_0805fbfe;
                  goto LAB_0805fc9c;
                }
                uVar4 = 0xb;
              }
            }
            goto LAB_0805fcb2;
          }
          if (iVar5 == 0) {
            if (3 < uVar1) {
              if (uVar1 < 6) {
LAB_0805fc1a:
                *(undefined1 *)(param_1 + 0xd) = 0xe;
              }
              else if (uVar1 < 10) {
LAB_0805fc24:
                *(undefined1 *)(param_1 + 0xd) = 8;
              }
              else {
                if (uVar1 < 0x11) {
                  uVar4 = 0xb;
                  goto LAB_0805fcb2;
                }
                if (uVar1 < 0x17) goto LAB_0805fc9c;
joined_r0x0805fbb0:
                if (0x1c < uVar1) {
LAB_0805fcac:
                  *(undefined1 *)(param_1 + 0xd) = 0x1b;
                  goto LAB_0805fcb4;
                }
LAB_0805fca4:
                *(undefined1 *)(param_1 + 0xd) = 0x18;
              }
              goto LAB_0805fcb4;
            }
LAB_0805fc78:
            *(undefined1 *)(param_1 + 0xd) = 4;
          }
          else {
            if (iVar5 == 1) {
              if (4 < uVar1) {
                if (6 < uVar1) {
                  if (9 < uVar1) {
                    if (uVar1 < 0x10) {
LAB_0805fc5c:
                      *(undefined1 *)(param_1 + 0xd) = 0xb;
                      goto LAB_0805fcb4;
                    }
                    if (0x13 < uVar1) {
                      if (0x18 < uVar1) {
                        if (0x1a < uVar1) goto LAB_0805fc6e;
                        goto LAB_0805fcac;
                      }
                      goto LAB_0805fca4;
                    }
                    goto LAB_0805fc9c;
                  }
                  uVar4 = 8;
                  goto LAB_0805fcb2;
                }
LAB_0805fc4a:
                *(undefined1 *)(param_1 + 0xd) = 0xe;
                goto LAB_0805fcb4;
              }
              goto LAB_0805fc78;
            }
            if (uVar1 < 5) goto LAB_0805fc78;
            if (uVar1 < 7) {
              uVar4 = 0xe;
              goto LAB_0805fcb2;
            }
            if (uVar1 < 9) {
LAB_0805fc88:
              *(undefined1 *)(param_1 + 0xd) = 8;
            }
            else {
              if (0xe < uVar1) {
                if (uVar1 < 0x13) goto LAB_0805fc9c;
                if (uVar1 < 0x17) goto LAB_0805fca4;
                if (uVar1 < 0x1a) goto LAB_0805fcac;
                uVar4 = 0x1f;
                goto LAB_0805fcb2;
              }
LAB_0805fc92:
              *(undefined1 *)(param_1 + 0xd) = 0xb;
            }
          }
        }
LAB_0805fcb4:
      } while ((((*(byte *)(*DAT_0805fcf4 + 1) < 5) ||
                (cVar2 = *(char *)(param_1 + 0xd), (*(byte *)(DAT_0805fcf8 + 4) & 4) != 0)) &&
               (cVar2 = *(char *)(param_1 + 0xd), cVar2 == '\x1f')) ||
              (cVar2 == *(char *)(param_1 + 0xd0)));
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


