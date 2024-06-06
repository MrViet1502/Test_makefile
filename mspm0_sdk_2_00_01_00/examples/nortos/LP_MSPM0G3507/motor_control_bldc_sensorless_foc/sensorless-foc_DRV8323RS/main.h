/* --COPYRIGHT--,TI
 *MSP Source and Object Code Software License Agreement
 **IMPORTANT - PLEASE CAREFULLY READ THE FOLLOWING LICENSE AGREEMENT, WHICH IS LEGALLY BINDING.  AFTER YOU READ IT, YOU WILL BE ASKED WHETHER YOU ACCEPT AND AGREE TO ITS TERMS.  DO NOT CLICK  "I ACCEPT" UNLESS: (1) YOU WILL USE THE LICENSED MATERIALS FOR YOUR OWN BENEFIT AND PERSONALLY ACCEPT, AGREE TO AND INTEND TO BE BOUND BY THESE TERMS; OR (2) YOU ARE AUTHORIZED TO, AND INTEND TO BE BOUND BY, THESE TERMS ON BEHALF OF YOUR COMPANY.
 **Important - Read carefully: This Source and Object Code Software License Agreement ("Agreement") is a legal agreement between you and Texas Instruments Incorporated ("TI").  In this Agreement "you" means you personally if you will exercise the rights granted for your own benefit, but it means your company (or you on behalf of your company) if you will exercise the rights granted for your company's benefit.  The "Licensed Materials" subject to this Agreement include the software programs and any associated electronic documentation (in each case, in whole or in part) that accompany this Agreement, are set forth in the applicable software manifest and you access "on-line", as well as any updates or upgrades to such software programs or documentation, if any, provided to you at TI's sole discretion.  The Licensed Materials are specifically designed and licensed for use solely and exclusively with MSP microcontroller devices manufactured by or for TI ("TI Devices").  By installing, copying or otherwise using the Licensed Materials you agree to abide by the provisions set forth herein.  This Agreement is displayed for you to read prior to using the Licensed Materials.  If you choose not to accept or agree with these provisions, do not download or install the Licensed Materials.
 **Note Regarding Possible Access to Other Licensed Materials:  The Licensed Materials may be bundled with software and associated electronic documentation, if any, licensed under terms other than the terms of this Agreement (in whole or in part, "Other Licensed Materials"), including, for example Open Source Software and/or TI-owned or third party Proprietary Software licensed under such other terms.  "Open Source Software" means any software licensed under terms requiring that (A) other software ("Proprietary Software") incorporated, combined or distributed with such software or developed using such software: (i) be disclosed or distributed in source code form; or (ii) otherwise be licensed on terms inconsistent with the terms of this Agreement, including but not limited to permitting use of the Proprietary Software on or with devices other than TI Devices, or (B) require the owner of Proprietary Software to license any of its patents to users of the Open Source Software and/or Proprietary Software incorporated, combined or distributed with such Open Source Software or developed using such Open Source Software.
 **If by accepting this Agreement, you gain access to Other Licensed Materials, they will be listed in the applicable software manifest.  Your use of the Other Licensed Materials is subject to the applicable other licensing terms acknowledgements and disclaimers as specified in the applicable software manifest and/or identified or included with the Other Licensed Materials in the software bundle.  For clarification, this Agreement does not limit your rights under, or grant you rights that supersede, the terms of any applicable Other Licensed Materials license agreement.  If any of the Other Licensed Materials is Open Source Software that has been provided to you in object code only under terms that obligate TI to provide to you or show you where you can access the source code versions of such Open Source Software, TI will provide to you, or show you where you can access, such source code if you contact TI at Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager, Embedded Processing.  In the event you choose not to accept or agree with the terms in any applicable Other Licensed Materials license agreement, you must terminate this Agreement.
 **1.    License Grant and Use Restrictions.
 **a.    Licensed Materials License Grant.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty-free license to:
 *            i.    Limited Source Code License:  make copies, prepare derivative works, display internally and use internally the Licensed Materials provided to you in source code for the sole purpose of developing object and executable versions of such Licensed Materials, or any derivative thereof, that execute solely and exclusively on TI Devices, for end use in Licensee Products, and maintaining and supporting such Licensed Materials, or any derivative thereof, and Licensee Products.  For purposes of this Agreement, "Licensee Product" means a product that consists of both hardware, including one or more TI Devices, and software components, including only executable versions of the Licensed Materials that execute solely and exclusively on such TI Devices.
 *            ii.    Object Code Evaluation, Testing and Use License:  make copies, display internally, distribute internally and use internally the Licensed Materials in object code for the sole purposes of evaluating and testing the Licensed Materials and designing and developing Licensee Products, and maintaining and supporting the Licensee Products;
 *            iii.    Demonstration License:  demonstrate to third parties the Licensed Materials executing solely and exclusively on TI Devices as they are used in Licensee Products, provided that such Licensed Materials are demonstrated in object or executable versions only and
 *        iv.    Production and Distribution License:  make, use, import, export and otherwise distribute the Licensed Materials as part of a Licensee Product, provided that such Licensee Products include only embedded executable copies of such Licensed Materials that execute solely and exclusively on TI Devices.
 *    b.    Contractors.  The licenses granted to you hereunder shall include your on-site and off-site contractors (either an individual or entity), while such contractors are performing work for or providing services to you, provided that such contractors have executed work-for-hire agreements with you containing applicable terms and conditions consistent with the terms and conditions set forth in this Agreement and provided further that you shall be liable to TI for any breach by your contractors of this Agreement to the same extent as you would be if you had breached the Agreement yourself.
 *    c.    No Other License.  Nothing in this Agreement shall be construed as a license to any intellectual property rights of TI other than those rights embodied in the Licensed Materials provided to you by TI.  EXCEPT AS PROVIDED HEREIN, NO OTHER LICENSE, EXPRESS OR IMPLIED, BY ESTOPPEL OR OTHERWISE, TO ANY OTHER TI INTELLECTUAL PROPERTY RIGHTS IS GRANTED HEREIN.
 *    d.    Covenant not to Sue.  During the term of this Agreement, you agree not to assert a claim against TI or its licensees that the Licensed Materials infringe your intellectual property rights.
 *    e.    Restrictions.  You shall maintain the source code versions of the Licensed Materials under password control protection and shall not disclose such source code versions of the Licensed Materials, to any person other than your employees and contractors whose job performance requires access.  You shall not use the Licensed Materials with a processing device other than a TI Device, and you agree that any such unauthorized use of the Licensed Materials is a material breach of this Agreement.  You shall not use the Licensed Materials for the purpose of analyzing or proving infringement of any of your patents by either TI or TI's customers.  Except as expressly provided in this Agreement, you shall not copy, publish, disclose, display, provide, transfer or make available the Licensed Materials to any third party and you shall not sublicense, transfer, or assign the Licensed Materials or your rights under this Agreement to any third party.  You shall not mortgage, pledge or encumber the Licensed Materials in any way.  You may use the Licensed Materials with Open Source Software or with software developed using Open Source Software tools provided you do not incorporate, combine or distribute the Licensed Materials in a manner that subjects the Licensed Materials to any license obligations or any other intellectual property related terms of any license governing such Open Source Software.
 *    f.    Termination.  This Agreement is effective on the date the Licensed Materials are delivered to you together with this Agreement and will remain in full force and effect until terminated.  You may terminate this Agreement at any time by written notice to TI.  Without prejudice to any other rights, if you fail to comply with the terms of this Agreement or you are acquired, TI may terminate your right to use the Licensed Materials upon written notice to you.  Upon termination of this Agreement, you will destroy any and all copies of the Licensed Materials in your possession, custody or control and provide to TI a written statement signed by your authorized representative certifying such destruction. Except for Sections 1(a), 1(b) and 1(d), all provisions of this Agreement shall survive termination of this Agreement.
 **2.    Licensed Materials Ownership.  The Licensed Materials are licensed, not sold to you, and can only be used in accordance with the terms of this Agreement.  Subject to the licenses granted to you pursuant to this Agreement, TI and its licensors own and shall continue to own all right, title and interest in and to the Licensed Materials, including all copies thereof.  You agree that all fixes, modifications and improvements to the Licensed Materials conceived of or made by TI that are based, either in whole or in part, on your feedback, suggestions or recommendations are the exclusive property of TI and all right, title and interest in and to such fixes, modifications or improvements to the Licensed Materials will vest solely in TI.  Moreover, you acknowledge and agree that when your independently developed software or hardware components are combined, in whole or in part, with the Licensed Materials, your right to use the combined work that includes the Licensed Materials remains subject to the terms and conditions of this Agreement.
 **3.    Intellectual Property Rights.
 *    a.    The Licensed Materials contain copyrighted material, trade secrets and other proprietary information of TI and its licensors and are protected by copyright laws, international copyright treaties, and trade secret laws, as well as other intellectual property laws.  To protect TI's and its licensors' rights in the Licensed Materials, you agree, except as specifically permitted by statute by a provision that cannot be waived by contract, not to "unlock", decompile, reverse engineer, disassemble or otherwise translate to a human-perceivable form any portions of the Licensed Materials provided to you in object code format only, nor permit any person or entity to do so.  You shall not remove, alter, cover, or obscure any confidentiality, trade secret, trade mark, patent, copyright or other proprietary notice or other identifying marks or designs from any component of the Licensed Materials and you shall reproduce and include in all copies of the Licensed Materials the copyright notice(s) and proprietary legend(s) of TI and its licensors as they appear in the Licensed Materials.  TI reserves all rights not specifically granted under this Agreement.
 *    b.    Certain Licensed Materials may be based on industry recognized standards or software programs published by industry recognized standards bodies and certain third parties may claim to own patents, copyrights, and other intellectual property rights that cover implementation of those standards.  You acknowledge and agree that this Agreement does not convey a license to any such third party patents, copyrights, and other intellectual property rights and that you are solely responsible for any patent, copyright, or other intellectual property right claim that relates to your use or distribution of the Licensed Materials or your use or distribution of your products that include or incorporate the Licensed Materials.  Moreover, you acknowledge that you are responsible for any fees or royalties that may be payable to any third party based on such third party's interests in the Licensed Materials or any intellectual property rights that cover implementation of any industry recognized standard, any software program published by any industry recognized standards bodies or any other proprietary technology.
 **4.    Confidential Information.  You acknowledge and agree that the Licensed Materials contain trade secrets and other confidential information of TI and its licensors.  You agree to use the Licensed Materials solely within the scope of the licenses set forth herein, to maintain the Licensed Materials in strict confidence, to use at least the same procedures and degree of care that you use to prevent disclosure of your own confidential information of like importance but in no instance less than reasonable care, and to prevent disclosure of the Licensed Materials to any third party, except as may be necessary and required in connection with your rights and obligations hereunder; provided, however, that you may not provide the Licensed Materials to any business organization or group within your company or to customers or contractors that design or manufacture semiconductors unless TI gives written consent.  You agree to obtain executed confidentiality agreements with your employees and contractors having access to the Licensed Materials and to diligently take steps to enforce such agreements in this respect.  TI may disclose your contact information to TI's licensors.
 **5.    Warranties and Limitations.  THE LICENSED MATERIALS ARE PROVIDED "AS IS".  FURTHERMORE, YOU ACKNOWLEDGE AND AGREE THAT THE LICENSED MATERIALS HAVE NOT BEEN TESTED OR CERTIFIED BY ANY GOVERNMENT AGENCY OR INDUSTRY REGULATORY ORGANIZATION OR ANY OTHER THIRD PARTY ORGANIZATION.  YOU AGREE THAT PRIOR TO USING, INCORPORATING OR DISTRIBUTING THE LICENSED MATERIALS IN OR WITH ANY COMMERCIAL PRODUCT THAT YOU WILL THOROUGHLY TEST THE PRODUCT AND THE FUNCTIONALITY OF THE LICENSED MATERIALS IN OR WITH THAT PRODUCT AND BE SOLELY RESPONSIBLE FOR ANY PROBLEMS OR FAILURES.
 **TI AND ITS LICENSORS MAKE NO WARRANTY OR REPRESENTATION, EITHER EXPRESS, IMPLIED OR STATUTORY, REGARDING THE LICENSED MATERIALS, INCLUDING BUT NOT LIMITED TO ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF ANY THIRD PARTY PATENTS, COPYRIGHTS, TRADE SECRETS OR OTHER INTELLECTUAL PROPERTY RIGHTS.  YOU AGREE TO USE YOUR INDEPENDENT JUDGMENT IN DEVELOPING YOUR PRODUCTS.  NOTHING CONTAINED IN THIS AGREEMENT WILL BE CONSTRUED AS A WARRANTY OR REPRESENTATION BY TI TO MAINTAIN PRODUCTION OF ANY TI SEMICONDUCTOR DEVICE OR OTHER HARDWARE OR SOFTWARE WITH WHICH THE LICENSED MATERIALS MAY BE USED.
 **IN NO EVENT SHALL TI OR ITS LICENSORS, BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL, PUNITIVE OR CONSEQUENTIAL DAMAGES, HOWEVER CAUSED, ON ANY THEORY OF LIABILITY, IN CONNECTION WITH OR ARISING OUT OF THIS AGREEMENT OR THE USE OF THE LICENSED MATERIALS REGARDLESS OF WHETHER TI HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF REMOVAL OR REINSTALLATION, OUTSIDE COMPUTER TIME, LABOR COSTS, LOSS OF DATA, LOSS OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF USE OR INTERRUPTION OF BUSINESS.  IN NO EVENT WILL TI'S OR ITS LICENSORS' AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF YOUR USE OF THE LICENSED MATERIALS EXCEED FIVE HUNDRED U.S. DOLLARS (US$500).
 *    Because some jurisdictions do not allow the exclusion or limitation of incidental or consequential damages or limitation on how long an implied warranty lasts, the above limitations or exclusions may not apply to you.
 **6.    Indemnification Disclaimer.  YOU ACKNOWLEDGE AND AGREE THAT TI SHALL NOT BE LIABLE FOR AND SHALL NOT DEFEND OR INDEMNIFY YOU AGAINST ANY THIRD PARTY INFRINGEMENT CLAIM THAT RELATES TO OR IS BASED ON YOUR MANUFACTURE, USE, OR DISTRIBUTION OF THE LICENSED MATERIALS OR YOUR MANUFACTURE, USE, OFFER FOR SALE, SALE, IMPORTATION OR DISTRIBUTION OF YOUR PRODUCTS THAT INCLUDE OR INCORPORATE THE LICENSED MATERIALS.
 **7.    No Technical Support.  TI and its licensors are under no obligation to install, maintain or support the Licensed Materials.
 **8.    Notices.  All notices to TI hereunder shall be delivered to Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager - Embedded Processing, with a copy to Texas Instruments Incorporated, 13588 N. Central Expressway, Mail Station 3999, Dallas, Texas 75243, Attention: Law Department - Embedded Processing.  All notices shall be deemed served when received by TI.
 **9.    Export Control.  The Licensed Materials are subject to export control under the U.S. Commerce Department's Export Administration Regulations ("EAR").  Unless prior authorization is obtained from the U.S. Commerce Department, neither you nor your subsidiaries shall export, re-export, or release, directly or indirectly (including, without limitation, by permitting the Licensed Materials to be downloaded), any technology, software, or software source code, received from TI, or export, directly or indirectly, any direct product of such technology, software, or software source code, to any person, destination or country to which the export, re-export, or release of the technology, software, or software source code, or direct product is prohibited by the EAR.  You represent and warrant that you (i) are not located in, or under the control of, a national or resident of Cuba, Iran, North Korea, Sudan and Syria or any other country subject to a U.S. goods embargo; (ii) are not on the U.S. Treasury Department's List of Specially Designated Nationals or the U.S. Commerce Department's Denied Persons List or Entity List; and (iii) will not use the Licensed Materials or transfer the Licensed Materials for use in any military, nuclear, chemical or biological weapons, or missile technology end-uses.  Any software export classification made by TI shall not be construed as a representation or warranty regarding the proper export classification for such software or whether an export license or other documentation is required for the exportation of such software.
 **10.    Governing Law and Severability; Waiver.  This Agreement will be governed by and interpreted in accordance with the laws of the State of Texas, without reference to conflict of laws principles.  If for any reason a court of competent jurisdiction finds any provision of the Agreement to be unenforceable, that provision will be enforced to the maximum extent possible to effectuate the intent of the parties, and the remainder of the Agreement shall continue in full force and effect.  This Agreement shall not be governed by the United Nations Convention on Contracts for the International Sale of Goods, or by the Uniform Computer Information Transactions Act (UCITA).  The parties agree that non-exclusive jurisdiction for any dispute arising out of or relating to this Agreement lies within the courts located in the State of Texas.  Notwithstanding the foregoing, any judgment may be enforced in any United States or foreign court, and either party may seek injunctive relief in any United States or foreign court.  Failure by TI to enforce any provision of this Agreement shall not be deemed a waiver of future enforcement of that or any other provision in this Agreement or any other agreement that may be in place between the parties.
 **11.    PRC Provisions.  If you are located in the People's Republic of China ("PRC") or if the Licensed Materials will be sent to the PRC, the following provisions shall apply:
 *    a.    Registration Requirements.  You shall be solely responsible for performing all acts and obtaining all approvals that may be required in connection with this Agreement by the government of the PRC, including but not limited to registering pursuant to, and otherwise complying with, the PRC Measures on the Administration of Software Products, Management Regulations on Technology Import-Export, and Technology Import and Export Contract Registration Management Rules.  Upon receipt of such approvals from the government authorities, you shall forward evidence of all such approvals to TI for its records.  In the event that you fail to obtain any such approval or registration, you shall be solely responsible for any and all losses, damages or costs resulting therefrom, and shall indemnify TI for all such losses, damages or costs.
 **b.    Governing Language.  This Agreement is written and executed in the English language and shall be authoritative and controlling, whether or not translated into a language other than English to comply with law or for reference purposes.  If a translation of this Agreement is required for any purpose, including but not limited to registration of the Agreement pursuant to any governmental laws, regulations or rules, you shall be solely responsible for creating such translation.
 **12.    Contingencies.    TI shall not be in breach of this Agreement and shall not be liable for any non-performance or delay in performance if such non-performance or delay is due to a force majeure event or other circumstances beyond TI's reasonable control.
 **13.        Entire Agreement.  This is the entire agreement between you and TI and this Agreement supersedes any prior agreement between the parties related to the subject matter of this Agreement.  Notwithstanding the foregoing, any signed and effective software license agreement relating to the subject matter hereof and stating expressly that such agreement shall control regardless of any subsequent click-wrap, shrink-wrap or web-wrap, shall supersede the terms of this Agreement.  No amendment or modification of this Agreement will be effective unless in writing and signed by a duly authorized representative of TI.  You hereby warrant and represent that you have obtained all authorizations and other applicable consents required empowering you to enter into this Agreement.
 * --/COPYRIGHT--*/
#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/*! @brief Application Major FW Version */
#define APP_MAJOR_VER  (0x02)
/*! @brief Application Minor FW Version */
#define APP_MINOR_VER  (0x00)
/*! @brief Application Patch FW Version */
#define APP_PATCH_VER  (0x00)
/*! @brief Application FW Version */
#define APP_FW_VERSION (APP_MAJOR_VER << 16) + (APP_MINOR_VER<<8) + (APP_PATCH_VER)

/*! @brief Sqrt(3) in float */
#define SQRT_3              	1.732050807568877

/* Application Memory Address Base
 * User should ensure that any new variables
 * added to below structures shouldn't
 * overflow into other sections of memory*/

/*! @brief FLASH shadow address base
*    1KBytes of SRAM Memory space reserved for storing
*    the Tuning Configurations that can be flashed
*    */
#define APP_USER_INP_BASE            0x20200000UL

/*! @brief User CTRL Inputs address base */
#define APP_USER_CTRL_BASE          0x20200400UL

/*! @brief User Status address base */
#define APP_USER_STATUS_BASE        0x20200430UL

/*! @brief FW Version address base */
#define APP_FW_VER_BASE             0x20200B40UL

#ifdef DRV8329

/*! @brief DRV8329 has non inverting isense */
#define _NONINVERT_ISEN
/*! @brief DRV8329 propagation delay */
#define DRIVER_PROPAGATION_DELAY_nS                164
/*! @brief DRV8329 minimum on time(rise time + settling time) */
#define DRIVER_MIN_ON_TIME_nS                      1300
/*! @brief DC voltage base value */
#define DC_VOLTAGE_BASE                             76.04
/*! @brief Full scale readable current used as current base value,
calculated using (FULL Scale Voltage(3.3) - CSA_REF(3.3/8) )/(Rsense(20mOhm) * CSA Gain(20)) */
#define FULL_SCALE_CURRENT_BASE                    7.218
/*! @brief Current shunt configuration */
#define __CURRENT_SINGLE_SHUNT
/*! @brief Enable dynamic current shunt changing */
#define DYNAMIC_CURRENT_SHUNT_CONFIG_EN             FALSE

#elif defined DRV8323

/*! @brief DRV8323 has inverting isense */
#define _INVERT_ISEN
/*! @brief DRV8323 propagation delay */
#define DRIVER_PROPAGATION_DELAY_nS                100
/*! @brief DRV8323 minimum on time(rise time + settling time) */
#define DRIVER_MIN_ON_TIME_nS                      4000
/*! @brief DC voltage base value */
#define DC_VOLTAGE_BASE                             57.42
/*! @brief Full scale readable current used as current base value,
calculated using (FULL Scale Voltage(3.3)/2*(Rsense(7mOhm) * CSA Gain(5)) */
#define FULL_SCALE_CURRENT_BASE                    11.785
/*! @brief Current shunt configuration */
#define __CURRENT_THREE_SHUNT_DYNAMIC
/*! @brief Enable dynamic current shunt changing */
#define DYNAMIC_CURRENT_SHUNT_CONFIG_EN             TRUE

#elif defined DRV8316

/*! @brief DRV8316 has inverting isense */
#define _INVERT_ISEN
/*! @brief DRV8323 propagation delay */
#define DRIVER_PROPAGATION_DELAY_nS                100
/*! @brief DRV8316 minimum on time (rise time + settling time) */
#define DRIVER_MIN_ON_TIME_nS                      1000
/*! @brief DC voltage base value */
#define DC_VOLTAGE_BASE                             44.59
/*! @brief Full scale readable current used as current base value,
calculated using (FULL Scale Voltage(3.3)/2* CSA Gain(0.15(v/A))) */
#define FULL_SCALE_CURRENT_BASE                     11.0
/*! @brief Current shunt configuration */
#define __CURRENT_THREE_SHUNT_DYNAMIC
/*! @brief Enable dynamic current shunt changing */
#define DYNAMIC_CURRENT_SHUNT_CONFIG_EN             TRUE

#elif defined TIDA010250

/*! @brief TIDA010250 has inverting isense */
#define _INVERT_ISEN
/*! @brief TIDA010250 propagation delay */
#define DRIVER_PROPAGATION_DELAY_nS                500
/*! @brief TIDA010250 minimum on time (rise time + settling time) */
#define DRIVER_MIN_ON_TIME_nS                      8000
/*! @brief DC voltage base value */
#define DC_VOLTAGE_BASE                             448.0
/*! @brief Full scale readable current used as current base value,
calculated using (FULL Scale Voltage(3.3)/2* CSA Gain) */
#define FULL_SCALE_CURRENT_BASE                     8.25
/*! @brief Current shunt configuration */
#define __CURRENT_THREE_SHUNT_DYNAMIC
/*! @brief Enable dynamic current shunt changing */
#define DYNAMIC_CURRENT_SHUNT_CONFIG_EN             FALSE//TRUE

#elif defined TIDA010265

/*! @brief TIDA010265 has non inverting isense */
#define _NONINVERT_ISEN
/*! @brief TIDA010265 propagation delay */
#define DRIVER_PROPAGATION_DELAY_nS                100
/*! @brief TIDA010265 minimum on time (rise time + settling time) */
#define DRIVER_MIN_ON_TIME_nS                      2000
/*! @brief DC voltage base value */
#define DC_VOLTAGE_BASE                             404.129
/*! @brief Full scale readable current used as current base value,
calculated using (FULL Scale Voltage(3.3)/2* CSA Gain) */
#define FULL_SCALE_CURRENT_BASE                     7.919
/*! @brief Current shunt configuration */
#define __CURRENT_TWO_SHUNT_B_C_N
#define __CURRENT_SINGLE_SHUNT
/*! @brief Enable dynamic current shunt changing */
#define DYNAMIC_CURRENT_SHUNT_CONFIG_EN             FALSE

#endif

/*! @brief Total time taken for ADC to sample all currents */
#define ADC_SAMPLING_TIME_ns                        1800

/*! @brief MOTOR base Speed */
#define MOTOR_MAX_SPEED                             (200.0)
/*! @brief MOTOR base voltage */
#define MOTOR_VOLTAGE_BASE                          DC_VOLTAGE_BASE / SQRT_3

/*! @brief Hysteresis for under voltage */
#define UNDER_VOLTAGE_HYSTERESIS_VOLTS              (1.0)

/*! @brief Hysteresis for over voltage */
#define OVER_VOLTAGE_HYSTERESIS_VOLTS               (1.0)

/*! @brief Hysteresis for under voltage in perunit */
#define UNDER_VOLTAGE_HYSTERESIS_PU                 (UNDER_VOLTAGE_HYSTERESIS_VOLTS/DC_VOLTAGE_BASE) /* % of DC Bus Voltage */

/*! @brief Hysteresis for over voltage in perunit */
#define OVER_VOLTAGE_HYSTERESIS_PU                  (OVER_VOLTAGE_HYSTERESIS_VOLTS/DC_VOLTAGE_BASE) /* % of DC Bus Voltage */

/*! @brief Discontinous SVM minimum dutycycle in PWM timer counts */
#define DISCONTINUOUS_MIN_DUTY_COUNTS               10 

/* System setup */

/*! @brief Frequency of system interrupt used for running the low priority tasks in kHz  */
#define SYSTEM_EXECUTION_FREQ_KHZ                   1

/*! @brief Calculated system timer execution rate */
#define SYSTEM_EXECUTION_RATE               1.0f/(SYSTEM_EXECUTION_FREQ_KHZ*1000.0f)

/*! @brief CPU clock frequency in MHz */
#define CPU_FREQUENCY_MHZ                           80UL

/*! @brief System timer frequency in MHz */
#define SYSTEM_TIMER_FREQUENCY_MHZ                  40UL

/* IPD Parameters */
/*! @brief PWM frequency set when IPD in state */
#define IPD_EXECUTION_FREQUENCY_KHZ                 50UL
/*! @brief PWM timer period when IPD in state */
#define IPD_PWM_PERIOD                              (CPU_FREQUENCY_MHZ \
                                                     * 1000UL) /               \
                                                     IPD_EXECUTION_FREQUENCY_KHZ

/* Bit position for faults in fault status register for external communication and control */

/* Controller fault reporting */
/*! @brief IPD clock time out fault index */
#define IPD_CLOCK_TIMEOUT_FAULT_INDEX   0x10000000

/*! @brief IPD decay time fault index */
#define IPD_DECAY_TIME_FAULT_INDEX      0x08000000

/*! @brief BUS current limit fault index */
#define BUS_CURRENT_LIMIT_INDEX     0x04000000

/*! @brief Abnormal speed fault index */
#define ABN_SPEED_FAULT_INDEX       0x00800000

/*! @brief Abnormal backemf fault index */
#define ABN_BEMF_FAULT_INDEX        0x00400000

/*! @brief No motor fault index */
#define NO_MOTOR_FAULT_INDEX        0x00200000

/*! @brief Motor lock fault index */
#define MTR_LOCK_FAULT_INDEX        0x00F00000

/*! @brief Motor lock fault status */
#define MTR_LOCK_FAULT_STATUS       0x00100000

/*! @brief Hardware lock Ilimit fault index */
#define HW_LOCK_ILIMIT_FAULT_INDEX  0x00040000

/*! @brief Under voltage fault index */
#define UNDER_VOLTAGE_FAULT_INDEX   0x00020000

/*! @brief Over voltage fault index */
#define OVER_VOLTAGE_FAULT_INDEX    0x00010000



/* shunt configurations applied below */

#ifdef __CURRENT_THREE_SHUNT_DYNAMIC
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_THREE_SHUNT_DYNAMIC
#endif

#ifdef __CURRENT_THREE_SHUNT_AB_C
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_THREE_SHUNT_AB_C
#endif

#ifdef __CURRENT_THREE_SHUNT_A_BC
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_THREE_SHUNT_A_BC
#endif

#ifdef __CURRENT_TWO_SHUNT_A_B
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_TWO_SHUNT_A_B
#endif

#ifdef __CURRENT_TWO_SHUNT_A_C
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_TWO_SHUNT_A_C
#endif

#ifdef __CURRENT_TWO_SHUNT_B_C
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_TWO_SHUNT_B_C
#endif

#ifdef __CURRENT_SINGLE_SHUNT
    /*! @brief Define current shunt config */
    #define CURRENT_SHUNT_CONFIG                        CURRENT_SINGLE_SHUNT
#endif

#ifdef __cplusplus
}
#endif
#endif /* MAIN_H */
